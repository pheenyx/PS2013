//============================================================================
// Name        : args3.cpp
// Author      : Michael Mardaus
// Version     :
// Copyright   : 
// Description : reverses command line arguments and prints trice
//============================================================================

#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
	for (int i = 0; i < 3; i++) {
		for (int j = argc - 1; j > 0; j--) {
			cout << argv[j] << " ";
		}
		cout << endl;
	}

}
