#pragma once
using namespace std;

//This function creates a vector called "names", then prompts the user to enter a name, which is put into a string object "name" using the standard library function getline();. That object then gets placed into each index value.
void InputNames() {
	vector<string> names;
	for (int i = 0; i < 10; i++) {
		string name;
		cout << "Please enter a name: ";
		getline(cin, name);
		names.push_back(name);
	}
}

//This function checks whether a specified name is in the vector. If it exists, it returns "'name' does exist". If it doesn't exist, it returns "'name' does NOT exist".
bool DoesNameExist(const string nameTofind, const vector<string>& names)
{
	
}