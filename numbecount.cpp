#include<iostream>
#include<cmath>
using namespace std;
int main(){
	long long number;
	cout<<"Enter the number:";
	cin>>number;
	
	number=abs(number);
	
	int count=0;
	
	if(number==0){
		cout<<"digit = 1";
	}
	else
	  while(number!=0){
	  	number/=10;
	  	count++;
	  }
	
	cout<<"the total digit is : "<<count<<endl;
	 
	return 0;
}
