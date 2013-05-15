//============================================================================
// Name        : PolarCoordConv.cpp
// Author      : Michael Mardaus
// Version     :
// Copyright   : 
// Description :
//Write a function that converts polar to cartesian coordinates.
//The function signature (= return type, name, parameter list) should look like
//
//    void polar_to_cartesian(double r, double phi, double& x, double& y);
//
//but must use pointers instead of references. The return type and number of parameters as well as their meaning should remain unchanged.
//
//Your program should:
// - read 10 2d points in polar coordinates from the standard input (cin)
// - use 'polar_to_cartesian' to convert it to cartesian coordinates
// - print the resulting 10 cartesian points (coordinates separated by blanks)
//
//Don't worry about floating point precision, SAUCE can handle it.
//============================================================================

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>

using namespace std;

void polar_to_cartesian(double r, double phi, double* x, double* y){
	*x = r * cos(phi);
	*y = r * sin(phi);
	return;
}

int main(void) {
	for (int i = 0; i < 10; i++){
		double x;
		double y;
		double r;
		double phi;
		cin >> r >> phi;
		polar_to_cartesian(r, phi, &x, &y);
		cout << x << " " << y << endl;
	}


	return EXIT_SUCCESS;
}
