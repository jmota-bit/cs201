#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void stringLength(string in) {
	int len = in.size();

	cout << "The length of this string is: " << len;
}

int main() {
	cout << "Please enter a string (a word):\n";
	
	string word;
	cin >> word;

	stringLength(word);
}