/*
Problem: ID NUMBER GENERATOR
*/
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main(){
	//declaration
	string year_entered , applicant_no;
	string student_id;
	
	//input and process
	cout << "ID GENERATOR\n";
	cout << "Enter student year entered the school: ";
	cin >> year_entered;
	cout << "Enter student applicant number(XXX): ";
	cin >> applicant_no;
	
	if((!year_entered.empty())&&(year_entered.length()==4)){
		if((!applicant_no.empty())&&(applicant_no.length()==3)){
			student_id = year_entered + applicant_no;
			cout << "Student ID: " << student_id;
		}else{
			cout << "INVALID APPLICANT NUMBER!";
		}
	}else{
		cout << "INVALID YEAR!";
	}
	
	
	cout << endl;
	return 0;
}
