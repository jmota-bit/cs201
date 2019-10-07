#include <iostream>
#include <string>
#include <algorithm>
#include "str.h"


int main()
{
	std::string input;
	std::getline(std::cin, input);

	readString(input);
	
	return 0;
}