//============================================================================
// Name        : Collatz.cpp
// Author      : Michael Mardaus
// Version     :
// Copyright   : 
// Description : Collatz Series
//============================================================================

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	int input = 0;

	cin >> input;

	while (input != 1) {
		if (input % 2 == 0) {
			input /= 2;
		} else {
			input = input * 3 + 1;
		}
		cout << input << " ";
	}
	cout << endl;
}
