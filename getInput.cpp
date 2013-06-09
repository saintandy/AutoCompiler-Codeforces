#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

ifstream fin(".nameIn");
char S[1000200];

inline void getNextMatch(int &position, char S[], char word[]) {
	int lg = strlen(S), lgw = strlen(word);
	for (; position < lg; position++) {
		bool match = true;
		for (int i = 0, j = position; i < lgw && j < lg && match; i++, j++)
			if (S[j] != word[i]) match = false;
		if (match) break;
	}
}
inline void intToString(int number, char S[]) {
	int size = 0;
	memset(S, '\0', sizeof(S));
	for (int clone = number; clone > 0; clone /= 10, size++);
	for (; number > 0; S[--size] = (char)(number % 10 + '0'), number /= 10);
}

int main() {
	for (int asd = 1; asd <= 1000000; asd++) {
		fin.getline(S, 1000100);
		if (S[10] == '=' && S[11] == '"' && S[12] == 't' && S[13] == 't') {
			int position = 0, size = strlen(S);
			getNextMatch(position, S, "Input"); position++;
			getNextMatch(position, S, "Input");

			for (int test = 1; position < size; test++) {
				char testNumber[10]; intToString(test, testNumber);
				char InFile[100], OutFile[100];
				memset(InFile, '\0', sizeof(InFile)); memset(OutFile, '\0', sizeof(OutFile));
				cout << testNumber << '\n';
				strcat(InFile, ".test"); strcat(InFile, testNumber); strcat(InFile, ".in");
				strcat(OutFile, ".test"); strcat(OutFile, testNumber); strcat(OutFile, ".out");

				ofstream foutIn(InFile);
				ofstream foutOut(OutFile);
				position += 16;
				
				/*cout << position << '\n';
				for (int jj = position; jj <= position + 50; jj++)
					cout << S[jj];
				cout << '\n';*/
				
				while (true) {
					if (S[position] == '<') {
						position += 6;
						foutIn << '\n';
						if (S[position] == '<') break;
					} else {
						foutIn << S[position++];
					}
				}
				getNextMatch(position, S, "Output");
				position += 17;
				while (true) {
					if (S[position] == '<') {
						position += 6;
						foutOut << '\n';
						if (S[position] == '<') break;
					} else {
						foutOut << S[position++];
					}
				}
				foutIn.close(); foutOut.close();
				getNextMatch(position, S, "Input");
			}
			
			break;
		}
	}
}
