#include "userInput.hpp"
#include <iostream>
#include <string>
#include <vector>

void getUserStrings(std::vector<std::string>& words) {
	std::string word;
	std::getline(std::cin, word);

	std::cout << word;
	while (word != "end")
	words.push_back(word);
}