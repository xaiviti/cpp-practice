/*
Problem: Create a multiplication table based on the user's input
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	//declaration
	int number;
	
	//input and process
	cout << "THE MULTIPLICATION TABLE\n";
	cout << "Enter your number: ";
	cin >> number;
	
	for(int i=1; i<=number; i++){
		for(int j=1; j<=10; j++){
			cout << i*j << "\t";
		}
		cout << endl;
	}
	
	
	cout << endl;
	return 0;
}
