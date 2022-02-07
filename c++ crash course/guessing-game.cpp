/*
guessing game
*/
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <stdlib.h> //srand, rand
#include <time.h> //time
using namespace std;

int main(){
	int number;
	int response;
	int score = 0;
	srand(time(NULL));
	
	number = rand() % 10 + 1;
	
	do{
		cout << "Enter your first guess (1-10): ";
		cin >> response;
		
		if(response>number){
			cout << "That was too high!\n";
		}else if(response<number){
			cout << "That was to low!\n";
		}else{
			cout << "That was correct!\n";
		}
		score++;
	}while(number!=response);
	cout << "Number is " << number << endl;;
	cout << "Guesses: " << score;
	
	cout << endl;
	return 0;
}
