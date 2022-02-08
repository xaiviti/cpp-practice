/*
Problem: Given the radius, in inches, and the price of a pizza, design an
algorithm to find the price of the pizza per square inch.
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	double price, area, radius, diameter;
	
	cout << "PIZZA PIZZA\n";
	cout << "Enter the size of the pizza(diameter): ";
	cin >> diameter;
	
	radius = diameter / 2;
	area = (3.1416)*(radius)*(radius);
	
	price = area * 3.1567;
	
	cout << "Price of pizza with " << area;
	printf(" square inches is %0.2f", price);
	
	cout << endl;
	return 0;
}
