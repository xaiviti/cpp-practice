/*
Extract intials from the first name, middle name and last name
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
	//declaration
	string firstName, middleName, lastName;	
	
	//input
	cout << "EXTRACTING THE INITIALS\n";
	cout << "Enter your first name: ";
	cin >> firstName;
	cout << "Enter your middle name: ";
	cin >> middleName;
	cout << "Enter your last name: ";
	cin >> lastName;
	char first=firstName.at(0);
	char middle=middleName.at(0);
	char last=lastName.at(0);
	
	//output
	cout << "Your initials are " <<first<<middle<<last;
	
	return 0;
}
