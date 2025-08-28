
               //PROGRAM FOR THE SI AND TOTAL AMOUNT:

#include<iostream>
using namespace std;

int main(){
	
	float p,r,si,a;
	int t;

cout<<"Enter the borrowed amount:";
cin>>p;

cout<<"Enter the rate of interest:";
cin>>r;

cout<<"Enter the time period:";
cin>>t;

si=(p*r*t)/100;
cout<<"The simple interest is :"<<si<<endl
;


a=p+si;
cout<<"Amount after the interest:"<<a;	
	return 0;
}
