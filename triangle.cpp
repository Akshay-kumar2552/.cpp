                     //Write a program that reads two integers from the user 
                 //and determines if the first integer is divisible by the second 
                                       //integer.

#include<iostream>
using namespace std;

int main(){
	int x,y,z;
	
	cout<<"Enter the first side of triangle:";
	cin>>x;
	
	cout<<"Enter the second side of triangle:";
	cin>>y;
	
	cout<<"Enter the third side of triangle:";
	cin>>z;
	
	if(x==y&&y==z){
		cout<<"The triangle is euilateral."<<endl;
	}
	else if(x==y||y==z||z==x){
		cout<<"The triangle is isosecles.";
	}
	else 
		   cout<<"The triangle is scalen.";

	   return 0;
	
	
}                                       
