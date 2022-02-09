/*
Problem: Create a calculator that would process the value of factorial on an input
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	//declaration
	int number;
	int factorial=1;
	
	//input and process
	cout << "WHAT IS MY FACTORIAL VALUE? \n";
	cout << "Enter a number: ";
	cin >> number;
	
	for(int i=1; i<=number; i++){
		factorial = factorial * i;
	}
	
	cout << "Factorial Value: " << factorial;
	
	cout << endl;
	return 0;
}
