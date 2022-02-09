/*
Problem: Create a calculator with an option which operation
to be used. Operations will be addition, subtraction, 
multiplication, division, and modulo value.
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	//declaration
	int choice;
	double add1, add2, sum;
	double minuend, subtrahend, difference;
	double num1, num2, product;
	double dividend, divisor, quotient;
	int mod1, mod2, modulo;
	
	//input and process
	cout << "MY BASIC CALCULATOR\n";
	cout << "(1) Addition\n";
	cout << "(2) Subtraction\n";
	cout << "(3) Multiplication\n";
	cout << "(4) Division\n";
	cout << "(5) Modulo\n";
	cout << "Enter the operation to be used: ";
	cin >> choice;
	
	switch(choice){
		case 1:
			cout << "Addition: \n";
			cout << "Enter the first number: ";
			cin >> add1;
			cout << "Enter the second number: ";
			cin >> add2;
			sum = add1 + add2;
			cout << "Sum is " << sum;
			break;
		case 2:
			cout << "Subtraction: \n";
			cout << "Enter the minuend number: ";
			cin >> minuend;
			cout << "Enter the subtrahend number: ";
			cin >> subtrahend;
			difference = minuend - subtrahend;
			cout << "Difference is " << difference;
			break;
		case 3:
			cout << "Multiplication: \n";
			cout << "Enter the first number: ";
			cin >> num1;
			cout << "Enter the second number: ";
			cin >> num2;
			product = num1 * num2;
			cout << "Product is " << product;
			break;
		case 4:
			cout << "Division: \n";
			cout << "Enter the dividend number: ";
			cin >> dividend;
			cout << "Enter the divisor number: ";
			cin >> divisor;
			quotient = dividend / divisor;
			cout << "Quotient is " << quotient;
			break;
		case 5:
			cout << "Modulo: \n";
			cout << "Enter the first number: ";
			cin >> mod1;
			cout << "Enter the second number: ";
			cin >> mod2;
			modulo = mod1 % mod2;
			cout << "Remainder is " << modulo;
			break;
		default:
			cout << "Invalid input! Restart the program.";
			break;
	}
	
	cout << endl;
	return 0;
}
