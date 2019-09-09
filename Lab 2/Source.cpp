#include <iostream>

using std::cout;
using std::cin;

int main(int argc, char** argv)
{
	cout << "Please type an integer:\n";
	int input;
	cin >> input;

	cout << (input + 1)*(input + 12);
}