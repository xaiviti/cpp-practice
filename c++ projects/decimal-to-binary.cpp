/*
Problem: Create a program that would convert decimal to binary.
*/
#include <iostream>
using namespace std;

int main(){
	//declaration
	int decimal, modulo, quotient;
	
	//input and process
	cout << "DECIMAL TO BINARY\n";
	cout << "Enter the decimal: ";
	cin >> decimal;
	
	do{
		modulo = decimal % 2;
		cout << modulo << " ";
		quotient = decimal / 2;
		decimal = quotient;
	} while(decimal!=1);
	cout << quotient;
	
	cout << endl;
	return 0;
}
