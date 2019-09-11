#include <iostream>

int main()
{
	int i = 0;
	int ln = 0;
	int nu = 0;
	
	while (i >= 0 and i <= 20) {
		std::cout << i << std::endl;
		++i;
	}

	while (ln >= 0) {
		
		while (nu <= 6) {
			std::cout << "*";
			++nu;
			
			if (nu > 6) {
				break;
			}
		
		}
			
			++ln;
	}	
}