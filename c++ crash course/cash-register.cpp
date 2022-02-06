/*
	Create a program where it will simulate a cash register
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
	//declaration
	string item;
	double price;
	int quantity;
	double totalAmount;
	
	//input
	//prompt user what they wanted to buy
	cout << "What item do you want to buy? ";
	getline(cin, item);
	cout << "What is the price for each? ";
	cin >> price;
	cout << "How many would you like to buy? ";
	cin >> quantity;
	cout << endl;
	totalAmount = price * quantity;
	cout << "item: " << item << endl;
	cout << "price: $" << price << endl;
	cout << "Total Amount: " << totalAmount;
	
	
	return 0;
}
