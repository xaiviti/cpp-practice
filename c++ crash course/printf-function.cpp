/*
printf function
*/
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
	
	/*
	%[flags][width][.precision][length]specifier
	string(.c_str())
	*/
	string make = "Audi";
	string model = "eTron";
	int year = 2021;
	double price = 99999.123;
	char forSale = 'Y';
	
	printf("Your car is made by: %s", "Audi"); 
	cout << endl;
	printf("Your car is made by: %s", make.c_str()); 
	cout << endl;
	
	printf("Your car is an %s %s", make.c_str(), model.c_str());
	cout << endl;
	
	printf("The year is %d", year);
	cout << endl;
	
	printf("The amount is %lf", price);
	cout << endl;
	
	printf("The year is %c", forSale);
	cout << endl;
	
	return 0;
}
