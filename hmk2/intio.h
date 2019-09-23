#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

//This function creates a vector called "names", then prompts the user to enter a name, which is put into a string object "name" using the standard library function getline();. That object then gets placed into each index value.
void InputNames(vector<string> & v) 
{
	for (int i = 0; i < 10; i++) {
		string name;
		cout << "Please enter a name: ";
		getline(cin, name);
		v.push_back(name);
	}

}

//This function checks whether a specified name is in the vector. If it exists, it returns "'name' does exist". If it doesn't exist, it returns "'name' does NOT exist".
bool DoesNameExist(const string & nameTofind, const vector<string> & names)
{
	
	for (int i = 0; i <= names.size(); i++)
	{
		if (nameTofind == names[i])
		{
			cout << nameTofind << " does exist.";
			return true;
		}
		if (i == names.size() && nameTofind != names[i])
		{
			cout << nameTofind << " does NOT exist.";
			return false;
		}
	}
}