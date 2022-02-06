/*
String Functions
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
	//declaration
	string firstName, lastName, middleName, greetings, phoneNumber;
	
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
	cout << "Enter you phone number: ";
	getline(cin, phoneNumber);
	
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
	
	cout << endl;
	// stringName.at(value starts at 0) to locate on the string
	cout << "First Letter of first name is " <<firstName.at(0);
	
	cout << endl;
	// stringName.substr(int x, int y) retrieve a portion of a string
	string nickname = firstName.substr(0,4);
	cout << "Nickname is " <<nickname;
	
	cout << endl;
	// stringName.insert(int x, string2) Insert a string
	cout << "insert in greetings: "<<greetings.insert(7,"!");
	
	cout << endl;
	// stringName.find("string2") returns the index of string2
	cout << "e is Found at position :" <<firstName.find("e");
	
	cout << endl;
	// stringName.erase(x,y) erases a portion of a string
	cout << "New phone number " << phoneNumber.erase(0,4);
	
	return 0;
}
