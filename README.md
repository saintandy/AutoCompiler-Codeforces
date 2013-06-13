
	These are my files for codeforces rounds

	To use them make:
		- copy the script (there are 2 ways to do that, as follows):
			- write in your terminal "git clone https://github.com/vladtarniceru/codeforces" , "cd codeforces" .
			or
			- copy "new" file in your folder, then "chmod +x new".
		- to create a new round write in your terminal "./new" , then "cd new"
		- to open all the problems from a round write "./link" and tell the round id
		- to run the tests write "./test" , then enter the round id and the problem name (from 'A' to 'E'):
			- you should find them in the problem link
			- example, for "http://codeforces.com/problemset/problem/314/D", round id is 314 and the problem is D
			- UPDATE: now you don't have to enter the name of the round anymore... just enter the name of the problem
				- you can do this using arguments or the "normal" way :)
	
	If you find, report any bugs at "vladtarniceru@gmail.com"
	
	Note that you will have to print an empty line in the output.
	For example, if you have to print one number, you should do
		cout << NUMBER << "\n";


	Vim support:
		- you can set a shortcut in your vimrc which runs the "test" file from "%". Everything will work automatically
		Code:
			map SHORTCUT :w! <CR> :!./test % <CR>
			imap SHORTCUT <ESC> :w! <CR> :!./test % <CR>


