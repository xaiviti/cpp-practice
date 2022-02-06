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
	
	printf("The amount is %f", price);
	cout << endl;
	
	printf("Is it for sale:  %c", forSale);
	cout << endl;
	
	//limited decimal : limit into 2 decimal places
	printf("The amount is $%.2f", price);
	cout << endl;
	
	//blank spaces : between % and s
	printf("This precedes with blank spaces:%10s", "Audi");
	cout << endl;
	printf("This precedes with zeros: %010s", "Audi");
	cout << endl;
	//left justify
	printf("Left Justify: %-10s%-10s", "Audi", "eTron");
	cout << endl;
	
	return 0;
}
