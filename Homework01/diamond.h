#pragma once

using std::cout;
using std::endl;

//This function takes the user input and draws the diamond.

void diamond(int in) {
	for (int line = 0; line <= in; ++line) {

		for (int dot = 1; dot <= (line * -1 + in - 1); dot++) {
			cout << " ";
		}

		cout << "#" << endl;
	}
}