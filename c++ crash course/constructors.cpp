/*
constructors - special function that is automatically called
				when an object is instantiated
			 - useful for assigning arguments to variables
*/
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <stdlib.h> //srand, rand
#include <time.h> //time
using namespace std;

class Human {
	public:
		string name;
		int age;
		double weight;
		
//		Human(string name, int age, double weight){
//			this->name = name;
//			this->age = age;
//			this->weight = weight;
//		}
		Human(string name, int age, double weight);
		
};

//scope resolution :: operator (you can put the constructor outside the class)

Human::Human(string name, int age, double weight){
			this->name = name;
			this->age = age;
			this->weight = weight;
		}

int main(){
	
	Human human1("Toby", 10, 16);
	Human human2("Teemo", 12, 10.8);
	
	cout << human1.name << endl;
	cout << human1.age << " years old" <<endl;
	cout << human1.weight << " kg" <<endl;
	
	cout << endl;
	return 0;
}
