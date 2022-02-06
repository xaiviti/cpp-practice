/*
if-else statement: temperature evaluation
*/
#include <iostream>
using namespace std;

int main(){
	//declaration
	int temperature;
	
	//input
	cout << "TEMPERATURE EVALUATION\n\n";
	cout << "Please enter the temperature: ";
	cin >> temperature;
	
	if(temperature>=30){
		cout << "It is HOT outside, :/";
	}else if(temperature<=0){
		cout << "It is COLD outside, *brrrrr*";
	}else{
		cout << "It is warm outside.";
	}
	
	return 0;
}
