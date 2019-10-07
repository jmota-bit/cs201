#pragma once

#include <iostream>
#include <string>

void modString(std::string word)
{
	for (int i = word.size() - 1; i > 0; i--) {
		
		std::string result = word.substr(0, i);
		std::cout << result << std::endl;
	}
}