// Exchange Rate program
// written by: Johannes Schmidt, Michael Mardaus

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
    if (argc != 3) {
		cout << argv[0] << " InFileName OutFileName" << endl;
		return 1;
	}
	ifstream is(argv[1]);
	ofstream os(argv[2]);

	if (is.is_open() && os.is_open()) {
		string s;
		getline(is, s);

		os << "date         EUR->USD    USD->EUR" << endl;
		while (!is.eof()) {
			string date;
			double eur;
			double usd;

			is >> date >> eur >> usd;

			if(date==""){
				return 0;
			}
//setiosflags and setprecision round the result to 2 decimal places.
			os << date << "\t" << setiosflags(ios::fixed) << setprecision(2) << usd / eur << "\t " << eur / usd << endl;


		}
		return 0;

	} else {
		cout << "I/O Error" << endl;
		return 2;
	}
}
