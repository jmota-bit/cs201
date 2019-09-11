#include <iostream>

int main()
{
	//Number loop
	int i = 0;
	
	while (i >= 0 and i <= 20) {
		std::cout << i << std::endl;
		++i;
	}
	
	//Character loop
	int ln = 0;
	int nu = 0;
	
	while (ln >= 0) {
		
		while (nu <= 5) {
			
			std::cout << "*";
			++nu;

			if (nu > 5) {
				std::cout << "*" << std::endl;
			}
		
		}
			
		++ln;
			
		if (ln > 10) {
				break;
		}
	}	
}