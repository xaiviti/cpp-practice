/*
User defined functions: addition
*/
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

double add(double num1, double num2){
	double sum = num1 + num2;
	return sum;
};

int main(){
	double number1, number2;
	
	cout << "Enter 1st number: ";
	cin >> number1;
	cout << "Enter 2nd number: ";
	cin >> number2;
	
	double results = add(number1, number2);
	cout << "Sum is " << results;
	
	cout << endl;
	return 0;
}
