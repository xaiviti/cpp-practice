/*
Problem: Create a program that would convert decimal to binary.
*/
#include <iostream>
using namespace std;

int main(){
	//declaration
	int decimal, modulo, quotient, i;
	char arr[i];
	
	//input and process
	cout << "DECIMAL TO BINARY\n";
	cout << "Enter the decimal: ";
	cin >> decimal;
	
	do{
		modulo = decimal % 2;
		arr[i]=modulo;
		quotient = decimal / 2;
		decimal = quotient;
		i++;
	} while((decimal!=1));
	arr[i+1]=quotient;
	cout << i;
	
	cout << endl;
	return 0;
}
