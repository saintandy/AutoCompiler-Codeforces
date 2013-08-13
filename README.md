## These are my files for codeforces rounds ##
### How to clone: ###
- copy the script (there are 2 ways to do that, as follows):
- write in your terminal `git clone https://github.com/vladtarniceru/codeforces`, `cd codeforces`.

**or**
- copy `new` file in your folder, then `chmod +x new`.

### How to create a new round: ###
- write in your terminal `./new`, then `cd new`
- to open all the problems from a round (browser) write `./link` and tell the round id

### How to run tests: ###

- to run the tests write `./test` , then enter the round id and the problem name (from **A** to **E**):
- example, for `http://codeforces.com/problemset/problem/314/D`, round id is 314 and the problem is D

### Vim support: ###
- you can set a shortcut in your vimrc which runs the `test` file from `%`. Everything will work automatically
**Code:**

  `map SHORTCUT :w! <CR> :!./test % <CR>`

  `imap SHORTCUT <ESC> :w! <CR> :!./test % <CR>`

**UPDATE:**
- now you do not have to enter the name of the round anymore... just enter the name of the problem
- you can do this using arguments or the "normal" way :)
- if you want to use your own `sample.cpp`, you must move it in the round folder and then type `./reset`

**IMPORTANT:**
- note that you will have to print an empty line in the output.
- for example, if you have to print one number, you should do `cout << NUMBER << "\n";`

If you find, report any bugs at *vladtarniceru@gmail.com*
