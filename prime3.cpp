#include<iostream>
using namespace std;

int main(){
	
	cout<<"The prime number from 1 to 100 is :";
	
	for(int num=2;num<100;num++0){
		bool isprime = true;
	
	for(int i=2;i<=num/2;i++){
	
     if(num%i==0){
     	isprime=false;
	 }
}
	if(isprime)
	cout<<num;
}
	
	
	return 0;
}
