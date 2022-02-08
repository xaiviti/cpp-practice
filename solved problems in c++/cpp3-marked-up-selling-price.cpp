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
	public:
		string name;
		double initialPrice, sellingPrice;
		
		void info(){
			cout << this->name << "\t\t" << "$ "<< this->initialPrice << "\t\t" << "$ "<< this->sellingPrice << endl;
		}
	
};

int main(){
	
	Items item1;
	Items item2;
	Items item3;
	Items item4;
	Items item5;
	Items item6;
	
	item1.name = "Table";
	item1.initialPrice = 6599;
	item1.sellingPrice = item1.initialPrice*1.6;
	
	item2.name = "Sofa";
	item2.initialPrice = 2779;
	item2.sellingPrice = item2.initialPrice*1.6;
	
	item3.name = "Bed";
	item3.initialPrice = 5789;
	item3.sellingPrice = item3.initialPrice*1.6;
	
	item4.name = "Chair";
	item4.initialPrice = 1299;
	item4.sellingPrice = item4.initialPrice*1.6;
	
	item5.name = "Cabinet";
	item5.initialPrice = 3800;
	item5.sellingPrice = item5.initialPrice*1.6;
	
	item6.name = "Violin";
	item6.initialPrice = 4999;
	item6.sellingPrice = item6.initialPrice*1.6;
	
	cout << "Furniture \t Price\t\tSelling Price\n";
	cout << "---------------------------------------------\n";
	item1.info();
	item2.info();
	item3.info();
	item4.info();
	item5.info();
	item6.info();
	
	cout << endl;
	return 0;
}
