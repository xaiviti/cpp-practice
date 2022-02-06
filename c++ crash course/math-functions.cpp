/*
Math Functions
*/

#include <iostream>
#include <string>
#include <algorithm>		//import algorithm
#include <cmath>			//for pow
using namespace std;

int main(){
	//declaration	
	double x, y, s, m;
	
	//input
	cout << "MATH FUNCTIONS\n\n";
	cout << "Enter number 1: ";
	cin >> x;
	cout << "Enter number 2: ";
	cin >> y;
	cout << "Enter number 3 for absolute value: ";
	cin >> s;
	cout << "Enter a decimal value for round off: ";
	cin >> m;
	
	//min and max functions
	double z = max(x,y);
	double w = min(x,y);
	//power function
	double v = pow(x,y);
	//square root function
	double u = sqrt(x);
	//absolue value function
	double t = abs(s);
	//round function
	double n = round(m);
	//ceiling function
	double a = ceil(m);
	//floor function
	double b = floor(m);
	
	//return the higher number
	cout << "Higher Number is " << z;
	cout << endl;
	cout << "Lower Number is " << w;
	cout << endl;
	
	//return the power value
	cout << "x to the power of y is " << v;
	cout << endl;
	
	//return the sqrt value
	cout << "sqrt of x is " << u;
	cout << endl;
	
	//return the absolute value of a number
	cout << "absolute value is " << t;
	cout << endl;
	
	//return to the nearest integer and follow the rules
		//of rounding numbers
	cout << "Rounded value is " << n;
	cout << endl;
	
	//return the ceiling value
	cout << "Rounded UP value is " << a;
	cout << endl;
	
	//return the floor value
	cout << "Rounded DOWN value is " << b;
	cout << endl;
	
	return 0;
}
