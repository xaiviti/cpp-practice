/*
Problem: Source identifier through wavelength
*/
#include <iostream>
using namespace std;

int main(){
	//declaration
	int wave_length;
	
	//input and process
	cout << "SOURCE IDENTIFIER\n";
	cout << "Enter the wave length (nanometers): ";
	cin >> wave_length;
	
	if(wave_length>=700){
		cout << "Source is Radio Waves";
	}else if(wave_length>=600 && wave_length<700){
		cout << "Source is Microwaves";
	}else if(wave_length>=580 && wave_length<600){
		cout << "Source is Infrared";
	}else if(wave_length>=550 && wave_length<580){
		cout << "Source is a Visible Light";
	}else if(wave_length>=475 && wave_length<550){
		cout << "Source is Ultraviolet";
	}else if(wave_length>=450 && wave_length<475){
		cout << "Source is X-Rays";
	}else if(wave_length>=400 && wave_length<450){
		cout << "Source is Gamma Rays";
	}else{
		cout << "Out of Range!";
	}
	
	cout << endl;
	return 0;
}
