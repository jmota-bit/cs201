/*
Julio Mota
9/15/2019
CS201
Hmk #1

This project performs two functions: one is to take an integer the user inputed and uses it to draw a diamond made of "#" of the specified size; second is to convert mph to kph.
*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

//This function takes the user input and draws the diamond.
void diamond(int in) {
	for (int line = 0; line <= in; ++line) {

		for (int dot = 1; dot <= (line * -1 + in - 1); dot++) {
			cout << " ";
		}
		
		cout << "#" << endl;
	}
}

//This function converts miles to kilometers.
void Conv(int miles) {

	double kilom;
	kilom = (miles * 1.609);

	cout << miles << " miles = " << kilom << " kilometers" << endl;
}


int main() {
	cout << "This program makes a diamond sized off of the integer inputed. Please enter a positive integer." << endl;
	
	int input;
	cin >> input;
	diamond(input);

	cout << "This program converts miles to kilometers. Please enter a number of miles: " << endl;
	int inp;
	cin >> inp;
	Conv(inp);
}

