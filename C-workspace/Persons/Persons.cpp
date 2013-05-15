//============================================================================
// Name        : Persons.cpp
// Author      : Michael Mardaus
// Version     :
// Copyright   : 
// Description : Hello World in C, Ansi-style
//============================================================================

// Persons program
// written by: Johannes Schmidt, Michael Mardaus

#include <iostream>
#include <cstdlib>
#include <string.h>

using namespace std;

struct Date{
    int day;
	int month;
	int year;
};

struct Person{
	 char name[100];
	 double weight;
	 double height;
	 Date dOB; //dateOfBirth
};

float bmi(double weight, double height){

	float result = weight/(height*height);

	return result;
}

void read_person(Person* pers){
	cin >> pers->name;
	char* lastName = new char[100];
	cin >> lastName;
	strcat(pers->name, " ");
	strcat(pers->name, lastName);
	cin >> pers->dOB.day;
	cin >> pers->dOB.month;
	cin >> pers->dOB.year;
	cin >> pers->weight;
	cin >> pers->height;
}

int main(){

	Person person;

	for(int i=0; i<10;i++){

		read_person(&person);

		cout << person.name << " " << person.dOB.day << "." << person.dOB.month << "." << person.dOB.year <<  " " << bmi(person.weight, person.height) << endl;
	}
}
