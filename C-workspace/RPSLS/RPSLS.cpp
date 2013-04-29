//============================================================================
// Name        : RPSLS.cpp
// Author      : Michael Mardaus
// Version     :
// Copyright   : 
// Description : Rock Paper Scissors Lizard Spock Game
//============================================================================

#include <iostream>
#include <cstdlib>      //contains srand() and rand() functions
#include <ctime>        //contains time() function
using namespace std;

double random_0_1() {
    return static_cast<double>(rand())/RAND_MAX;
}

void initialize_array(double* array, size_t size){
	for (unsigned i = 0; i < size; i++){
		array[i] = 0;
	}
}

int choose_value(double* pr){
	//assuming sum(pr[i]) == 1
	double random = static_cast<double>(rand())/RAND_MAX;;
	if (random < pr[0])
	    return 0; // rock
	else if (random < pr[0] + pr[1])
	    return 1; // paper
	else if (random < pr[0] + pr[1] + pr[2])
	    return 2; // scissors
	else if (random < pr[0] + pr[1] + pr[2] + pr[3])
		return 3; // lizard
	else
	    return 4; // spock
}

int evaluate_winner(int player1, int player2){
	int game = player1*10 + player2;
	//order is rock 0; paper 1; scissors 2; lizard 3; spock 4
	switch (game){
	case 03:
	case 02:
	case 10:
	case 14:
	case 21:
	case 23:
	case 34:
	case 31:
	case 42:
	case 40:
		return 1;
		break;
	case 04:
	case 01:
	case 12:
	case 13:
	case 24:
	case 20:
	case 30:
	case 32:
	case 43:
	case 41:
		return 2;
		break;
	case 00:
	case 11:
	case 22:
	case 33:
	case 44:
	default:
		return 0;
		break;

	}
}

int main() {
    //initialize random number generator with current time
    srand(time(0));
    //my variables
	double input = 1;
	int matches=0;
	int rounds=0;
	double player1[5];
	double player2[5];
	size_t size = sizeof(player1) / sizeof(player1[0]);
	initialize_array(player1, size);
	initialize_array(player2, size);

	cout << "#Please enter the number of matches: " << endl;
	cin >> matches;
	cout << "#Please enter the number of rounds: " << endl;
	cin >> rounds;

	int i, j, numberCounter;
	for (i=0; i<matches; i++) {
			// read the players probs for this match
			cout << "#Please enter 5 probabilities for rock paper scissors lizard spock for player 1: ";
			numberCounter = 0;
			for (j=0; j<5; j++){
				cin >> input;
				numberCounter++;

				player1[numberCounter-1] = input;
			}
			cout << "#Please enter 5 probabilities for rock paper scissors lizard spock for player 2: ";
			numberCounter = 0;
			for (j=0; j<5; j++){
				cin >> input;
				numberCounter++;

				player2[numberCounter-1] = input;
			}
			// match #i starts
			int k, roundResult;
			int player1Wins = 0;
			int player2Wins = 0;
			int tie = 0;
			for (k=0; k<rounds; k++){
				roundResult = evaluate_winner(choose_value(player1),choose_value(player2));
				switch (roundResult){
					case 1:
						player1Wins++;
						break;
					case 2:
						player2Wins++;
						break;
					case 0:
						tie++;
						break;
					default:
						cout << "something went wrong in round " << k << endl;
				}
			}
			//match #i is over
			//cout << player1Wins << " " << player2Wins << " "<< tie << endl;
			cout << player1Wins / (double)rounds <<  " " << player2Wins / (double)rounds << endl;
	}
}


