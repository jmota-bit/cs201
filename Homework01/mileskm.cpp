#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void Conv(int miles) {

	double kilom;
	kilom = (miles * 1.609);

	cout << miles << " miles = " << kilom << " kilometers" << endl;
}
