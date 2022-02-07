/*
pointers - stores an address of another vaariable
	-& address of operator
	-* deference operator
*/
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <stdlib.h> //srand, rand
#include <time.h> //time
using namespace std;

int main(){
	
	string name = "Heidi";
	int age = 25;
	string food = "pizza";
	/*
	//cout << name << endl;
	//cout << age << endl;
	
	// address in the memory
	cout << &name << endl;
	cout << &age << endl;
	*/
	
	string* pName = &name;
	int* pAge = &age;
	string* pFood = &food;
	
	cout << pName << endl;
	cout << pAge << endl;
	cout << pFood << endl;
	
	
	cout << endl;
	return 0;
}
