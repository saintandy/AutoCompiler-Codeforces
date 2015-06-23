import os
import html2text
import sys

os.system("curl http://codeforces.com/contest/" + sys.argv[1] + "/problem/" + sys.argv[2] + " > index.html")

f = open("index.html", "r")
text = f.read()

# g = open("problem", "w")
# g.write(html2text.html2text(text)) # debug purpose only

def correct(text):
    ref = ""
    for i in range(0, len(text)):
        if text[i] == '\n':
            while ref[len(ref) - 1] == ' ':
                ref = ref[:-1]
        ref = ref + text[i]
    return ref

text = text[text.find("Sample test(s)") : len(text)]
count = 1
while text.find("<pre>") != -1:
    fileinput = text[text.find("<pre>") + 5 : text.find("</pre>")]
    inputfile = open("input" + str(count), "w")
    writen = html2text.html2text(fileinput)
    writen = writen[0 : len(writen) - 2]
    inputfile.write(correct(writen))
    text = text[text.find("</pre>") + 6 : ]
    fileoutput = text[text.find("<pre>") + 5 : text.find("</pre>")]
    outputfile = open("output" + str(count), "w")
    writen = html2text.html2text(fileoutput)
    writen = writen[0 : len(writen) - 1]
    outputfile.write(correct(writen))
    text = text[text.find("</pre>") + 6 : ]
    count = count + 1
