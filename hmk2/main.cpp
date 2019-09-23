#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

#include "intio.h"
using namespace std;


bool DoesNameExist(const string & nameTofind, const vector<string> & names);


int main(int argc, char** argv)
{	
	vector<string> names;

	InputNames(names);
	
	string theName;
	cout << "Which name would you like to check?: ";
	getline(cin, theName);

	DoesNameExist(theName, names);
	
}
