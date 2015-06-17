
g++ -std=c++0x $1
echo 'Run Tests:'
for (( var=1; ; var++ )); do
    if [[ -a input$var ]]; then
        echo '--------------------------------------------------------------------------------'
        echo 'Test #'$var':'
        ./a.out < input$var > output
        echo 'Input:'
        cat input$var
        echo ''
        echo 'Expected output:'
        cat output$var
        echo 'Execution result:'
        cat output
		if diff -q output output$var > /dev/null ; then	
			echo 'Verdict: OK.'
			res[$((var))]='OK'
		else
			echo 'Verdict: Wrong Answer.'
			res[$((var))]='Wrong Answer'
		fi
	else
		break;
	fi	
done

echo '--------------------------------------------------------------------------------'
echo '--------------------------------------------------------------------------------'
echo 'Test results:'
for (( foo=1; $foo<$var; foo++ )); do
	echo 'Test #'$foo$': '${res[$((foo))]};
done

rm -rf input*
rm -rf output*
rm -rf a.out
rm -rf index.html
echo '--------------------------------------------------------------------------------'


echo ' '
echo ' '

