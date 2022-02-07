/*
random numbers
*/
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <stdlib.h> //srand, rand
#include <time.h> //time
using namespace std;

int main(){
	//pseudo-random numbers
	srand(time(NULL));
	
	int number1 = rand() % 10 + 1;//10 sided dice like from 1
	int number2 = rand() % 10 + 1;
	int number3 = rand() % 10 + 1;
	
	cout << number1 << endl;
	cout << number2 << endl;
	cout << number3 << endl;
	
	cout << endl;
	return 0;
}
