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
	for (int line = 0; line < in; ++line) {
		
		for (int dot = 1; dot <= (line * -1 + in - 1); dot++) {
			cout << ".";
		}
		
		for (int line = 0; line <= (line * 2 - 1); line++) {
			cout << "#" << endl;
		}

		
	}
	
}

int main() {
	cout << "This program makes a diamond sized off of the integer inputed. Please enter a positive integer." << endl;
	
	int input;
	cin >> input;
	diamond(input);

}

