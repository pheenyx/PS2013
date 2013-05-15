//============================================================================
// Name        : CStrings.cpp
// Author      : Michael Mardaus
// Version     :
// Copyright   : 
// Description : C strings are "null-terminated" arrays of characters (char).
// This means that the last element of a C string is a '\0' character which is used as an end marker. The string "hello" can be represented by following C string:
//     char s1[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
// Note that the piece of memory holding such a string can be longer than the actual string itself:
//    char s2[10] = {'h', 'e', 'l', 'l', 'o', '\0', 'a', '5', 'c', z'};
//
// By the way:
// The command line arguments array (char* argv[]) is an array of
// C strings, so every element (argv[0], argv[1],...) is a C string.
//
// Implement the bodies of the functions 'cstr_length', 'cstr_equal' and 'cstr_replace' in the program given below.
// Don't use any of the C string functions from the C library.
// Don't change the 'main' function.
//
// (The SAUCE test command line arguments are: abc axza AbC dDxxx6z abc x 6)
//============================================================================

#include <iostream>

using namespace std;

//maximum length of strings we care about
const unsigned MAXLEN = 1000;

//returns the length of a C String (1 P)
unsigned cstr_length(const char* s)
{
    for (unsigned i = 0; i < MAXLEN; i++){
    	if(s[i] == '\0'){
    		return i;
    	}
    }
    return 4711;
}

//returns true if two C Strings are equal (1 P)
//should be case sensitive, so cstr_equal("aa","Aa") returns false
bool cstr_equal(const char* a, const char* b)
{
    for (unsigned i = 0; i < MAXLEN; i++){
    	if(a[i] != b[i]){
    		return false;
    	} else if(a[i] == '\0' && b[i] == '\0'){
    		return true;
    	}
    }
    return false;
}

//'out' stores the result of replacing all occurences of
//character 'find' with character 'replacement' within the C String 'in'
//and returns the number of replacements (2 P)
unsigned cstr_replace(const char* in, char find, char replacement, char* out)
{
    int replaced = 0;
    for (unsigned i = 0; i < MAXLEN; i++){
    	if(in[i] == '\0'){
    		out[i] = in [i];
    		return replaced;
    	} else if(in[i] == find){
    		out[i] = replacement;
    		replaced++;
    	} else {
    		out[i] = in[i];
    	}
    }
    return 4711;
}

//does compile and run correctly (1 P)
//(don'change anything in 'main')
int main(int argc, char* argv[]) {
    if(argc < 3) return 1;

    for(int i = 1; i < argc; ++i) {
        cout << cstr_length(argv[i]) <<'\n';
    }
    for(int i = 1; i < argc; ++i) {
        for(int j = 1; j < argc; ++j) {
            if(i != j) {
                cout << (cstr_equal(argv[i], argv[j]) ? "== " : "!= ");
                char res[MAXLEN];
                unsigned reps = cstr_replace(argv[i], argv[j][0], '*', res);
                cout << reps <<' '<< res <<'\n';
            }
        }
    }
    return 0;
}
