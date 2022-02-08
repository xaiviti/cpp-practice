/*
Problem: Create a program that will convert feet 
in inches and cm.
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	double feet, inches, centimeters;
	
	cout << "FEET TO (INCHES AND CENTIMETERS)\n";
	
	cout << "Enter value in feet: ";
	cin >> feet;
	
	inches = feet*12;
	centimeters = feet*30.48;
	
	cout << "Result is " << feet << "ft";
	cout << " is equivalent to " << inches << "in";
	cout << " and " << centimeters << "cm.";
	
	cout << endl;
	return 0;
}
