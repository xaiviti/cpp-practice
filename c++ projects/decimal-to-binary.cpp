/*
Problem: Create a program that would convert decimal to binary.
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	//declaration
	int decimal, result, quotient, i;
	string binary[i];
	
	//input and process
	cout << "DECIMAL TO BINARY\n";
	cout << "Enter the decimal: ";
	cin >> decimal;
	
	do{
		result = decimal % 2;
		cout << result << " ";
		quotient = decimal / 2;
		decimal = quotient;
	} while(quotient!=2);
	cout << decimal;
	
	
	cout << quotient;
	
	cout << endl;
	return 0;
}
