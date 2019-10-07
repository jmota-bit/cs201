#include <string>
#include <vector>
#include <iostream>

#include "vector_manip.hpp"

void message(std::vector<std::string> &words) {
	
	std::cout << "Enter some words: ";
	std::string word;
	std::getline(std::cin, word);

	for (std::string wrd : words) {
		words.push_back(word);
	}
	
}
