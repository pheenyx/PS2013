// LineCounter program
// written by: Johannes Schmidt, Michael Mardaus

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

int main() {
    while (true) {
		cout << "Please insert Filename" << endl;
		char name[100];
		cin >> name;
		ifstream is(name);
		if (is.is_open()) {
			int counter = 0;
			string s;

			while (!is.eof()) {

				getline(is, s);
				counter++;

			}
// Sophie said, empty last line does not count,
//so if s from last line is "", we decrease our counter by 1.
			if (s == "") {
				counter--;
			}
			cout << counter << endl;
		} else {
			cout << "file not found. terminating..." << endl;
			return 1;
		}

	}

}
