/*
Problem: Convert into NATO CODE
*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	//declaration
	string message;
	int length;
	char letter;
	
	//input and process
	cout << "NATO CODE\n";
	cout << "Enter the message: ";
	getline(cin, message);
	
	length = message.length();
	
	for(int i=0; i<length; i++){
		letter = message.at(i);
		switch(letter){
			case 'A': case 'a':
				cout << "ALPHA-";
				break;
			case 'B': case 'b':
				cout << "BRAVO-";
				break;
			case 'C': case 'c':
				cout << "CHARLIE-";
				break;
			case 'D': case 'd':
				cout << "DELTA-";
				break;
			case 'E': case 'e':
				cout << "ECHO-";
				break;
			case 'F': case 'f':
				cout << "FOXTROT-";
				break;
			case 'G': case 'g':
				cout << "GOLF-";
				break;
			case 'H': case 'h':
				cout << "HOTEL-";
				break;
			case 'I': case 'i':
				cout << "INDIA-";
				break;
			case 'J': case 'j':
				cout << "JULIET-";
				break;
			case 'K': case 'k':
				cout << "KILO-";
				break;
			case 'L': case 'l':
				cout << "LIMA-";
				break;
			case 'M': case 'm':
				cout << "MIKE-";
				break;
			case 'N': case 'n':
				cout << "NOVEMBER-";
				break;
			case 'O': case 'o':
				cout << "OSCAR-";
				break;
			case 'P': case 'p':
				cout << "PAPA-";
				break;
			case 'Q': case 'q':
				cout << "QUEBEC-";
				break;
			case 'R': case 'r':
				cout << "ROMEO-";
				break;
			case 'S': case 's':
				cout << "SIERRA-";
				break;
			case 'T': case 't':
				cout << "TANGO-";
				break;
			case 'U': case 'u':
				cout << "UNIFORM-";
				break;
			case 'V': case 'v':
				cout << "VICTOR-";
				break;
			case 'W': case 'w':
				cout << "WHISKEY-";
				break;
			case 'X': case 'x':
				cout << "X-RAY-";
				break;
			case 'Y': case 'y':
				cout << "YANKEE-";
				break;
			case 'Z': case 'z':
				cout << "ZULU-";
				break;
			default:
				cout << "  ";
				break;
		}
	}
	
	cout << endl;
	return 0;
}
