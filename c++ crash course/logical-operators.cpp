/*
Logical Operators
	- && AND logical operator
	- || OR logical operator
	- ! NOT logical operator
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
	/*
	double temp;
	
	cout << "Enter your temperature: ";
	cin >> temp;
	
	// && 
	if(temp>=35 && temp<=37.5){
		cout << "You're temperature is normal. ";
	}else {
		cout << "GO TO THE HOSPITAL!";
	}
	
	string cough;
	
	cout << "Do you have a cough (yes/no): ";
	cin >> cough;
	
	// ||
	if(cough.at(0)=='y' || cough.at(0)=='Y'){
		cout << "You are sick!";
	}else{
		cout << "You are probably fine.";
	}
	*/
	string name;
	
	cout << "Enter your name: ";
	getline(cin, name);
	// !
	if(!name.empty()){
		cout << "Welcome " << name + "!";
	}else{
		cout << "YOU DID NOT ENTER YOUR NAME!";
	}
	
	cout << endl;
	return 0;
}
