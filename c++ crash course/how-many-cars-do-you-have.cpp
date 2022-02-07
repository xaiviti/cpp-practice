/*
arrays: how many cars do you have?
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
	
	cout << "How many cars do you have? ";
	cin >> number;
	cin.ignore(); //to clear the buffer
	//create a pointer for the array
	string* pCars = new string[number];
	
	for(int i=0; i<number ;i++){
		cout << "Enter car #" << i+1 << " :";
		getline(cin, pCars[i]);
	}
	
	cout << "\nHere is your garage! \n";
	cout << "----------------------\n";
	
	for(int i=0; i<number ;i++){
		cout << "Parking #" << i+1 << ":" << pCars[i] << endl;
	}	
	
	cout << endl;
	return 0;
}
