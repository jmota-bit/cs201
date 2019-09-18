/*
Julio Mota
9/15/2019
CS201
Hmk #1

This project performs two functions: one is to take an integer the user inputed and uses it to draw a diamond made of "#" of the specified size; second is to convert mph to kph.
*/

#include <iostream>
#include "conv.h"
#include "diamond.h"

using std::cout;
using std::cin;
using std::endl;






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

