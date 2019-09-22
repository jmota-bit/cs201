#pragma once
using std::cout;
using std::endl;

//This function converts miles to kilometers.

void Conv(int miles) {

	double kilom;
	kilom = (miles * 1.609);

	cout << miles << " miles = " << kilom << " kilometers" << endl;
}
