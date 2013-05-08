// Yahtzee program
// written by: Johannes Schmidt, Michael Mardaus

#include <iostream>
#include <cstdlib>

using namespace std;


//print method, taken from the given examples
void print_array(int a[5]) {
   for(int i = 0; i < 5; ++i)
      cout << a[i] << endl;
}

// simple sort method for the entered numbers
void sort(int arr[]){
	int b[5];
	int count = 0;
	for(int i=1; i<7; i++){
		for(int j=0; j<5; j++){
			if(arr[j]==i){
				b[count]=i;
				count++;
			}
		}
	}
	for(int k=0; k<5; k++){
		arr[k]=b[k];
	}
}

// method to check for the highest possible value
int check(int a[5]){

	int add = a[0]+a[1]+a[2]+a[3]+a[4]; //the sum of all dice



	if(a[0]==a[1]&&a[1]==a[2]&&a[2]==a[3]&&a[3]==a[4]){ // yahtzee
		return 50;
	}else
		if(a[0]!=a[1]&&a[1]!=a[2]&&a[2]!=a[3]&&a[3]!=a[4]&&(add==15 || add==20)){  // large straight
			return 40;
		}else
			if(a[1]==a[0]+1&&a[2]==a[1]+1&&a[3]==a[2]+1){  //small straight 1/2
				return 30;
		}else
			if(a[2]==a[1]+1&&a[3]==a[2]+1&&a[4]==a[3]+1){ // small straight 2/2
				return 30;
			}else


				if((a[0]==a[1]&&a[1]==a[2]&&a[3]==a[4]) ||(a[0]==a[1]&&a[2]==a[3]&&a[3]==a[4])){ // full house
					if(25<add){
						return add;
					}
					return 25;
				}
return add;  // if its not one of the above, its always the sum of all dice
}

int main(){

int dice[5];
bool stop = false; // bool to stop when 0 is entered

while(!stop){


for(int i=0; i<5; i++){
	cout << "# Bitte Augenzahl des " << i+1 << "ten Wuerfels eingeben" << endl;

	cin >> dice[i]; // input

	if(dice[i] == 0){  // to stop if 0 is entered
		stop = true;
		break;
	}
}
if(stop)
	break;

sort(dice);
//print_array(dice);

int result = 0;
result = check(dice);

cout << result << endl;  // output of the result
}
}


