/*
Problem: Create a program that would convert decimal to binary.
*/
#include <iostream>
using namespace std;

int main(){
	//declaration
	int decimal, modulo, quotient;
	int i=0;
	int arr[i];
	
	//input and process
	cout << "DECIMAL TO BINARY\n";
	cout << "Enter the decimal: ";
	cin >> decimal;
	
	if(decimal==1){
		cout << "Binary Value is: " << decimal;
	}else if (decimal>1){
		do{
		modulo = decimal % 2;
		arr[i] = modulo;
		quotient = decimal / 2;
		decimal = quotient;
		i++;
		} while(decimal!=1);
		arr[i] = quotient;
		cout << "Binary Value is: ";
		while(i>=0){
			cout << arr[i] << " ";
			i--;
		}
	}else{
		cout << "Error!";
	}
	
	
	cout << endl;
	return 0;
}
