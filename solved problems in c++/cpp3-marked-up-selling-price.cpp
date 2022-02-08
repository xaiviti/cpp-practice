/*
Problem: To make a profit, the prices of the items sold in a furniture 
store are marked up by 60%. Design an algorithm to find the sellling 
price of an item sold at the furniture store. What information do you 
need to find the selling price.
*/
#include <iostream>
#include <algorithm>
using namespace std;

class Items {
	string name;
	double initialPrice, sellingPrice;
	
	void info(){
		cout << this->name << "\t\t" << this->initialPrice << "\t\t" << this->sellingPrice << endl;
	}
	
};

int main(){
	
	Items item1;
	Items item2;
	Items item3;
	Items item4;
	Items item5;
	Items item6;
	
	
	
	cout << endl;
	return 0;
}
