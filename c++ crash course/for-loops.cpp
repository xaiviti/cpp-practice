/*
For loops
*/
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
	/*
	// Countin how many times it repeated : count up
	for(int i=0; i<10; i++){
		cout << i+1 << endl;
	}
	cout << "You can count to 10";
	
	// Countin how many times it repeated : count doun
	for(int i=10; i>0; i-=2){
		cout << i << endl;
	}
	cout << "Happy New Year!";
	*/
	string word;
	
	cout << "Enter the word to spell: ";
	getline(cin, word);
	for(int i=0; i<word.length(); i++){
		cout << word.at(i) << " ";
	}
	
	cout << endl;
	
	return 0;
}
