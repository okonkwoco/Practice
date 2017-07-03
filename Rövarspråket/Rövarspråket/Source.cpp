#include <string>
#include <iostream>
#include <vector>

using namespace std;


int main() {
	string word;
	cout << "insert word: ";
	getline(cin,word);

	for (char  ch : word) {
		if (ch == 'b' || ch == 'c' || ch == 'd' || ch == 'f' || ch == 'g' ||
			ch == 'h' || ch == 'j' || ch == 'k' || ch == 'l' || ch == 'm' ||
			ch == 'n' || ch == 'p' || ch == 'q' || ch == 'r' || ch == 's' ||
			ch == 't' || ch == 'v' || ch == 'w' || ch == 'x' || ch == 'z' || ch == 'B' || ch == 'C' || ch == 'D' || ch == 'F' || ch == 'G' ||
			ch == 'H' || ch == 'J' || ch == 'K' || ch == 'L' || ch == 'M' ||
			ch == 'N' || ch == 'P' || ch == 'Q' || ch == 'R' || ch == 'S' ||
			ch == 'T' || ch == 'V' || ch == 'W' || ch == 'X' || ch == 'Z') {
			cout << ch << 'o' << (char)(tolower(ch));
		}
		else 
			cout << ch;
	
	}
	system("PAUSE");
}