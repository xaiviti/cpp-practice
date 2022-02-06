/*
String Functions
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
	//declaration
	string firstName, lastName, middleName, greetings;
	
	//input
	cout << "STRING FUNCTIONS\n\n";
	
	cout << "Enter Welcome: ";
	getline(cin, greetings);
	cout << "Enter your first name: ";
	getline(cin, firstName);
	cout << "Enter your middle name: ";
	getline(cin, middleName);
	cout << "Enter your last name (do not enter anything): ";
	getline(cin, lastName);
	
	// stringName.length() returns the length of the string
	cout << "Length of first name is " << firstName.length();
	cout << endl;
	// stringName.empty() checks if the first name is empty
	cout << "Is the Last Name empty? " << lastName.empty();
	cout << endl;
	// stringName.clear() clears the value of the string
	middleName.clear();
	cout << "Middle Name is " << middleName;
	
	cout << endl;
	// stringName.append(stringName2) appends two strings
	cout << firstName.append("@gmail.com");
	
	return 0;
}
