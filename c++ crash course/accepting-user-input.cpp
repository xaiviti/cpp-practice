/*
	-accepting user input
*/
#include <iostream>
using namespace std;

int main(){
	
	//accept user input
	//store it on a variable and use it
	string name;
	
	cout << "Accepting user input\n\n";
	cout << "Enter you name: ";
	cin >> name;
	cout << "Welcome " << name + "!";
	
	return 0;
}
