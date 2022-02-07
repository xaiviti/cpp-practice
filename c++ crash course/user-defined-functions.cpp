/*
User defined functions
*/
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

//sending information
void greetings(string name, int age){
	cout << "Welcome to my program " << name + "!\n";
	cout << "You are " << age << " years old";
	cout << endl;
};
// calling of function
void goodbye(){
	cout << "Goodbye!";
	cout << endl;
};


int main(){
	string name;
	int age;
	
	cout << "Enter your name: ";
	cin >>  name;
	cout << "Enter your age: ";
	cin >>  age;
	
	greetings(name, age);
	goodbye();
	cout << endl;
	return 0;
}
