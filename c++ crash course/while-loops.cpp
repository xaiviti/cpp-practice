/*
While loops
*/
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
	/*
	//while loop
	string name;
	while(name.empty()){
		cout << "Please enter your name: \n";
		getline(cin, name);
	}
	cout << "Welcome " << name;
	*/
	
	//do-while loop
	string answer;
	do{
		cout << "You are playing THE GAME\n";
		cout << "* pew pew *\n";
		cout << "Press q to quit\n";
		getline(cin, answer);
		cout << "***************************\n";
	}while(answer.at(0)!='q' && answer.at(0)!='Q');
	cout << "You have quit the game.\n";
	
	
	return 0;
}
