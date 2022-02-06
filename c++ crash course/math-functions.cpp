/*
Math Functions
*/

#include <iostream>
#include <string>
#include <algorithm>		//import algorithm
using namespace std;

int main(){
	//declaration	
	double x, y;
	
	//input
	cout << "MATH FUNCTIONS\n\n";
	cout << "Enter number 1: ";
	cin >> x;
	cout << "Enter number 2: ";
	cin >> y;
	
	//min and max functions
	double z = max(x,y);
	double w = min(x,y);
	
	//return the higher number
	cout << "Higher Number is " << z;
	cout << "Lower Number is " << w;
	
	return 0;
}
