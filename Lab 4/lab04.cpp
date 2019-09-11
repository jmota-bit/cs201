/*

lab04.cpp
Julio Mota
9/11/19

This program prints the numbers 1 - 100. If a number is divisible by 3, "Fizz" is printed; if not, then the number itself is printed.
*/

#include <iostream>

int main(int argc, char **argv) {
	
	
		for (int i = 1; i <= 100; ++i) {
		
		while (i <= 100) {
			if (i % 3 != 0) {
				std::cout << i << std::endl;

			}
			else if (i % 3 == 0) {
				std::cout << "Fizz" << std::endl;
			}
			

			
			++i;
		}
	}

}