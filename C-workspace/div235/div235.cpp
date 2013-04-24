//============================================================================
// Name        : div235.cpp
// Author      : Michael Mardaus
// Version     :
// Copyright   : 
// Description : Check if divisible by 2, 3 and 5 and return yes or no
//============================================================================

#include <iostream>

using namespace std;

int main() {
	int input = 1;
	while (input) {

		cin >> input;

		if (input == 0)
			return 0;
		if (input % 2 == 0 || input % 3 == 0 || input % 5 == 0)
			cout << "yes" << endl;

		else
			cout << "no" << endl;

	}
}
