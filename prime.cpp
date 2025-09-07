#include<iostream>
using namespace std;
int main(){
	int num,prime=0;
	cout<<"Enter the number:";
	cin>>num;
	
	if(num<=1){
		cout<<"The number is not a prime number.";
	    return 0;
	}
	for(int i=2;i<num;i++){
		if(num%i==0){
		    prime=1;
		   break ;
		}
		
	}
	if(prime==1)
		cout<<"The number is a not prime number.";
	
	else
	
	   cout<<"the number is a prime number.";

	
	
	return 0;
}
