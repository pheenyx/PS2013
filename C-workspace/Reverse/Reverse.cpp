//============================================================================
// Name        : Reverse.cpp
// Author      : Michael Mardaus
// Version     :
// Copyright   : 
// Description : Reverses the given input
//============================================================================

#include <iostream>

using namespace std;

void initialize_array(int* array, size_t size){
	for (unsigned i = 0; i < size; i++){
		array[i] = 0;
	}
}

void print_reversed(int* numbers, size_t size){
	for (int i = size - 1; i >= 0; i--) {
		if (numbers[i] != 0){
			cout << numbers[i] << ' ';
		}
	}
	cout << endl;
}

int main() {
	int input = 1;
	int numbers[30];
	size_t size = sizeof(numbers) / sizeof(numbers[0]);
	initialize_array(numbers, size);

	int numberCounter = 0;

	while (input) {
		cout << "#Please enter digits: " << endl;
		cin >> input;
		numberCounter++;

		if (input == 0 || numberCounter == 30){
			print_reversed(numbers, size);
		}
		else {
			numbers[numberCounter-1] = input;
		}
	}
}

