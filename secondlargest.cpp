#include<iostream>
using namespace std;

int main(){
	int x,y,z;
	
	
	cout<<"Enter the first no.(x):";
	cin>>x;
	cout<<"Enter the second no.(y):";
	cin>>y;
	cout<<"Enter the third no.(z):";
	cin>>z;
	
	if(x<y && x>z ||x>y && x<z){
		cout<<"The x is the middle (second largest)number.";
	}
	else if(y<x&&y>z||y>x&&y<z){
		cout<<"The y is middle number or second largest.";
	}
	else
	 cout<<"The z is the second largest number.";
	 
	 return 0;
}
