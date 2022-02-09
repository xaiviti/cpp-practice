/*
Problem: Create a rectangle illustrator which will accept both the length 
and the width and will display the area of the rectangle. This would also
be the number of asterisk on the rectangle.
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	//declaration
	int length, width, area;
	
	//input and process
	cout << "VIEW THE RECTANGLE AND AREA\n";
	cout << "Enter the length of the rectangle: ";
	cin >> length;
	cout << "Enter the width of the rectangle: ";
	cin >> width;
	
	area = length * width;
	cout << endl;
	for(int i=0; i<length; i++){
		for(int j=0; j<width; j++){
			cout << "*";
		}
		cout << endl;
	}
	
	cout << endl;
	cout << "Area is " << area ;
	
	cout << endl;
	return 0;
}
