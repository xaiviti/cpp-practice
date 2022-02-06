/*
Nested for loops: but not limited to for loops only, you can
also use while loops or a combination
*/
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
	
	/*
	//Print out a rectangle of a certain symbol a user chooses,
	//with width and height
	*/
	char symbol;
	int width, height;
	
	cout << "Enter a symbol to use: ";
	cin >> symbol;
	cout << "Enter the width: ";
	cin >> width;
	cout << "Enter the height: ";
	cin >> height;
	
	for(int j=0; j<height; j++){
		for(int i=0; i<width; i++){
			cout << symbol;
		}
		cout << endl;
	}
	
	
	return 0;
}
