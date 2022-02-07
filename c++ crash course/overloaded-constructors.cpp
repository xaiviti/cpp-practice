/*
overloaded constructors
*/
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <stdlib.h> //srand, rand
#include <time.h> //time
using namespace std;

class Pizza {
	public:
		string bread, sauce, cheese, topping;
		Pizza(string bread, string sauce, string cheese, string topping){
			this->bread = bread;
			this->sauce = sauce;
			this->cheese = cheese;
			this->topping = topping;
		}
		
		Pizza(string bread, string sauce, string cheese){
			this->bread = bread;
			this->sauce = sauce;
			this->cheese = cheese;
		}
		
		Pizza(string bread, string sauce){
			this->bread = bread;
			this->sauce = sauce;
		}
		
		Pizza(string bread){
			this->bread = bread;
		}
		
		void orderPizza(){
			cout << "Here is your ";
			if(!bread.empty())
				cout << bread << "-";
			if(!sauce.empty())
				cout << sauce << "-";
			if(!cheese.empty())
				cout << cheese << "-";
			if(!topping.empty())
				cout << topping << "-";
			cout << " pizza" << endl;
		}
};

int main(){
	
	Pizza firstPizza("thick crust", "red sauce", "mozzarella");
	Pizza secondPizza("flat bread", "alfredo");
	
	secondPizza.orderPizza();
	
	cout << endl;
	return 0;
}
