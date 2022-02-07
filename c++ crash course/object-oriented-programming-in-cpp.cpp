/*
object oriented programming
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
		
		void eat(){
			cout << this->name <<" is eating" << endl;
		}
		
		void drink(){
			cout << this->name <<" is drinking" << endl;
		}
		
		void sleep(){
			cout << this->name <<" is sleeping" << endl;
		}
		
};

int main(){
	
	Human human1;
	Human human2;
	Human human3;
	
	human1.name = "Heidi";
	human1.age = 25;
	
	//cout << human1.name << endl;
	//cout << human1.age << endl;
	//human1.drink();
	
	human2.name = "Teemo";
	human2.age = 16;
	
	//cout << human2.name << endl;
	//cout << human2.age << endl;
	
	human3.name = "Toby";
	human3.age = 14;
	
	human1.drink();
	human2.sleep();
	human3.eat();
	
	
	cout << endl;
	return 0;
}
