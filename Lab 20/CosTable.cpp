#include <iostream>
#include <iomanip>
#include <vector>
#include <math.h>

int main() 
{
	int ang = 0;

	for (int i = 1; i <= 37; ++i)
	{
		double comp = ang * (180.0 / 3.141592653589793238463);
		std::cout << ang << " " << cos(comp) << std::endl;

		ang += 5;
	}
}