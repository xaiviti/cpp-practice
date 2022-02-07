/*
overloaded functions: you can reuse a function name as long
as they have different parameters
*/
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

void bakePizza(string bread){
	cout << "Here is your ";
	cout << bread << " ";
	cout << "pizza";
};

void bakePizza(string bread, string sauce){
	cout << "Here is your ";
	cout << bread << " ";
	cout << sauce << " ";
	cout << "pizza";
};

void bakePizza(string bread, string sauce, string cheese){
	cout << "Here is your ";
	cout << bread << " ";
	cout << sauce << " ";
	cout << cheese << " ";
	cout << "pizza";
};

void bakePizza(string bread, string sauce, string cheese, string topping){
	cout << "Here is your ";
	cout << bread << " ";
	cout << sauce << " ";
	cout << cheese << " ";
	cout << topping << " ";
	cout << "pizza";
};

int main(){
	string bread="thick crust";
	string sauce="marinara";
	string cheese="mozarella";
	string topping="pepperoni";
	
	bakePizza(bread);
	
	cout << endl;
	return 0;
}
