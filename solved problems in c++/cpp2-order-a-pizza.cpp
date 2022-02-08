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
	cout << "Pizza price per square inch is 50\n";
	cout << "Enter the size of the pizza(diameter): \n";
	cin >> radius;
	
	radius = diameter / 2;
	area = (3.1416)*(radius)*(radius);
	
	price = area * 50;
	
	cout << "Price of pizza with " << area << " square inches is " << price;
	
	cout << endl;
	return 0;
}
