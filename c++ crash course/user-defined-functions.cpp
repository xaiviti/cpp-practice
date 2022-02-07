/*
User defined functions
*/
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

//sending information
void greetings(string name){
	cout << "Welcome to my program " << name + "!";
	cout << endl;
};
// calling of function
void goodbye(){
	cout << "Goodbye!";
	cout << endl;
};


int main(){
	greetings("Heidi");
	goodbye();
	cout << endl;
	return 0;
}
