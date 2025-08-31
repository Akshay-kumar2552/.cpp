                   // Develop a program that converts a temperature from 
               //Fahrenheit to Celsius or vice versa based on user input. The 
                       //user should specify the type of conversion.
                       
#include<iostream>
using namespace std;

int main(){
	double F;
	int x;
	
	
	cout<<"1. for conversing the celcius to fahrenheit."<<endl;
	cout<<"2. for converting fahrenheit to celcius."<<endl;
	cout<<"Enter your choice(1 or 2):";
	cin>>x;
	
	if(x==1){
		int a;
		cout<<"Enter the temperature in celcius:";
		cin>>a;
		
		F=(a*9.00/5.00)+32;
		cout<<"Temperature in fahrenheit:";
		cout<<F;
	}
	else if(x==2){
		int b;
		cout<<"Enetr the temperature in fahrenheit:";
		cin>>b;
		F=(b-32)*5.00/9.00;
		cout<<"Temperature in celcius:";
	    cout<<F;
	}
		return 0;
}                       
