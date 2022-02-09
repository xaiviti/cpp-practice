/*
Problem: Create a program that will output if the word 
will use a or an, and display the word with the a or an.
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
	//declaration
	string word;
	
	//input and process
	cout << "TELL ME IF I AM A OR AN \n";
	cout << "Please enter a word: ";
	cin >> word;
	
	if(isdigit(word.at(0)) == false){
		switch(word.at(0)){
		case 'a': case 'e': case 'i': case 'o': case 'u': case 'A': case 'E': case 'I': case 'O': case 'U': 
			cout << "An " << word;
			break;
		default:
			cout << "A " << word;
			break;
		}
	}else{
		cout << "That is not a word.";
	}
	
	
	
	cout << endl;
	return 0;
}
