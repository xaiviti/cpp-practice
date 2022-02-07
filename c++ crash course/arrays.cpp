/*
arrays - variable that can store multiple values
*/
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <stdlib.h> //srand, rand
#include <time.h> //time
using namespace std;

int main(){
	
	string cars[] = {"Audi", "Ford", "Bentley", "Tesla"};
	cars[2] = "Mustang";
	for(int i=0;i<sizeof(cars);i++){
		cout << cars[i] << endl;
	}

	
	cout << endl;
	return 0;
}
