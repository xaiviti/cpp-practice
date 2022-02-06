/*
String Functions
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
	//declaration
	string firstName;
	
	//input
	cout << "STRING FUNCTIONS\n\n";
	
	cout << "Enter your first name: ";
	getline(cin, firstName);
	
	// stringName.length() returns the length of the string
	cout << "Length of first name is " << firstName.length();
	
	
	return 0;
}
