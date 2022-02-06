/*
letter grade
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
	//declaration
	char answer;
	
	//input
	cout << "LETTER GRADE\n\n";
	cout << "What letter grade did you get? (A-F) ";
	cin >> answer;
	
	switch(answer){
		case 'A':
			cout << "You did PERFECT!";
			break;
		case 'B':
			cout << "You did GOOD!";
			break;
		case 'C':
			cout << "You did OKAY!";
			break;
		case 'D':
			cout << "You did not do so good!";
			break;
		case 'F':
			cout << "You did FAILED!";
			break;
		default:
			cout << "You did not enter between A and F.";
			break;
	}
	
	return 0;
}
