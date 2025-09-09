#include<iostream>
using namespace std;

bool isfabonacci(int n){
	if(n==0||n==1){
		return true;
	}
 int a=0,b=1,next=a+b;
 while(next<=n){
 	if(next==n)
 	 return true;
 	next=a+b;
 	a=b;
 	b=next;
 }
	return false;
}



int main(){
	
	int n;
	cout<<"Enter the number you want to find:";
	cin>>n;
	
	if(isfabonacci(n
	)){
		cout<<"the number is in the fabonacci series."<<endl;
	}
	else
	 cout<<"the number is not in the fabonacci series."<<endl;
	
	return 0;
}
