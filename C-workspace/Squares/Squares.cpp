//============================================================================
// Name        : Squares.cpp
// Author      : Michael Mardaus, Johannes Schmidt
// Version     :
// Copyright   : 
// Description : Given Method from sauce to debug
//============================================================================

//a) the program cannot work as intended because the int [] x in the squares
//   function is only known on the function's stack. not outside in main.

//c) no further problems with initialization, because main just uses the first n slots
//   maybe integer overflow problems if n > sqrt(2^32)
//d) not neccesary, maybe long instead of int

#include <iostream>
using namespace std;

long* squares(int n) {
    //int x[n+1];
	long* x = new long[n+1];

    for(long i = 0; i <= n; ++i) {
        x[i] = i*i;
    }
    return (x + 1);
}

int main() {
    int n = 0;
    cin >> n;

    while(n) {
        long* s = squares(n);

        for(int i = 0; i < n; ++i) {
            cout << s[i] << endl;
        }
        cin >> n;
    }
    return 0;
}
