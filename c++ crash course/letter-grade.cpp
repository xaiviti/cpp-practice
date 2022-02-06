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
		case 'A': case 'a':
			cout << "You did PERFECT!";
			break;
		case 'B': case 'b':
			cout << "You did GOOD!";
			break;
		case 'C': case 'c':
			cout << "You did OKAY!";
			break;
		case 'D': case 'd':
			cout << "You did not do so good!";
			break;
		case 'F': case 'e':
			cout << "You did FAILED!";
			break;
		default:
			cout << "You did not enter between A and F.";
			break;
	}
	
	return 0;
}
