/*
Arithemetic
*/
#include <iostream>
using namespace std;

int main(){
	//Arithmetic Operators
		//addition			+
			//ex. cout << 5 + 2; // results is 7
		//subtraction		-
			// ex. cout << 5 - 2; // results is 3
		//multiplication	*
			//ex .cout << 5*2; // results is 10
		//division			/
			// ex. cout << 5/2; //displays only the whole no.(2)
		//modulus			%:it gets the remainder
			// ex. cout << 5 % 2; // remainder of 5/2 = 1
	
	//Increment and Decrement Operators
		/*
		//Increment
			int total = 1;
			total+=2;
			cout << total;
		//Decrement
			int total = 1;
			total--;
			cout << total;
		*/
	
	//Programming Equations P(M|d)(A|S): left to right eval
	double total = 1 + 2 -3 * 4 / 5.0 + (6 + 7);
	cout << total;
	
	
	return 0;
}
