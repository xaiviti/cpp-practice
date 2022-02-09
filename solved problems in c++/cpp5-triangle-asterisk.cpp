/*
Problem: Create a right triangle which will 
have the height and base same as the input;
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	//declaration
	int input;
	
	//input and process
	cout << "RIGHT TRAINGLE ASTERISK\n";
	
	cout << "Enter the height of the triangle: ";
	cin >> input;
	
	cout << endl;
	for(int height=1; height<=input; height++){
		for(int i=1; i<=height; i++){
			cout << "*";
		}
		cout << endl;
	}
	
	cout << endl;
	return 0;
}
