                    //Write a program that reads two integers from the user 
                //and determines if the first integer is divisible by the second 
                                       //integer.

#include<iostream>
using namespace std;

int main(){
	int x,y;
	
	cout<<"Enter the first integer:";
	cin>>x;
	
	cout<<"Enter the second integer:";
	cin>>y;
	
	if(x%y==0){
		cout<<"The first integer is divisible by second.";
	}
	else
	cout<<"The first integers is not divisible by second intiger.";
	
	return 0;
	
}                                       
