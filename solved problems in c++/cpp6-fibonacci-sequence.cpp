/*
Problem: Create a program of fibonacci sequence
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	
	// initiators
    int num, sum;
    int present_i = 0;
    int new_i = 1;
    //inputs
    cout << "The Fibonacci Sequence \n";
    cout << "Enter a number: ";
    cin >> num;
    //solution
    cout << new_i << " ";
    
    for(int i=1; i<=(num-1); i++){
        
        sum = present_i + new_i; //<-(1+0) - ()
        cout << sum << " "; 
        present_i = new_i;
        new_i = sum;
        
    }
	
	cout << endl;
	return 0;
}
