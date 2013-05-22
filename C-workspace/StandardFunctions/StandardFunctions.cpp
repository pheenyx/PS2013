//============================================================================
// Name        : StandardFunctions.cpp
// Author      : Michael Mardaus
// Version     :
// Copyright   : 
// Description :
//Write a program that reads an integer N and then does N times:
// - read an integer M
// - read a sequence of M doubles
// - store the sequence in the first half of a dynamically allocated
//    (= on the free store) array of size 2*m
// - use the 'sqrtf' function together with the 'transform' algorithm
//    to store the square roots of the m input numbers in the second half of the array
// - use the 'sort' standard algorithm to sort the entire array
// - write the array to the standard output (numbers, separated by spaces)
// - delete the array
//============================================================================

#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

int main(void) {
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++){
		int m;
		cin >> m;
		double* array = new double[2*m];

		for (int j = 0; j < m; j++){
			cin >> array[j];
		}
		transform(array,array+m,array+m,sqrtf);
		sort(array,array+2*m);

		for (int j = 0; j < 2*m; j++){
			cout << array[j] << " ";
		}
		cout << endl;

		delete[] array;
	}
}
