/*
Problem: Create a program that calculates the monthly paycheck of 
a salesperson in a department store.
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	//declaration
	double baseSalary, bonus, additionalBonus, paycheck;
	int noOfServiceYears, totalSales;
	
	cout << "PAYCHECK CALCULATOR\n\n";
	cout << "Enter the base salary: ";
	cin >> baseSalary;
	cout << "Enter the no of service (years): ";
	cin >> noOfServiceYears;
	cout << "Enter the total sales: ";
	cin >> totalSales;
	
	if(noOfServiceYears<=5){
		bonus = noOfServiceYears * 10;
	}else{
		bonus = noOfServiceYears * 20;
	}
	
	if(totalSales>=5000 && totalSales<10000){
		additionalBonus = totalSales * (0.03);
	}else{
		additionalBonus = totalSales * (0.06);
	}
	
	paycheck = baseSalary + bonus + additionalBonus;
	
	
	cout << endl;
	return 0;
}

