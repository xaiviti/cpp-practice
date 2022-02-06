/*
	-accepting user input
*/
#include <iostream>
#include <string> //for getline function: in order to get multiple words
using namespace std;

int main(){
	
	//accept user input
	//store it on a variable and use it
	string name;
	int age;
	
	cout << "Accepting user input\n\n";
	cout << "Enter you name: ";
	getline(cin, name);// replace cin statement with getline
	cout << "Enter your age: ";
	cin >> age;
	cout << "Welcome " << name + "!";
	cout << " Your age is " << age;
	
	return 0;
}
