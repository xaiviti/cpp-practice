/*
Find the position in the string
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
	string word, toFind;
	int position;
	
	cout << "Enter a word or sentence: ";
	getline(cin, word);
	cout << "Enter to be find: ";
	getline(cin, toFind);
	
	position = word.find(toFind);
	
	cout << "Found character/s at position: " << position;
	
	return 0;
}
