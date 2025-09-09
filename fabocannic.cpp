#include<iostream>
using namespace std;
int main(){
    int n;
	
	cout<<"Enter the N:";
	cin>>n;
	
	int a=0,b=1,next;
	if(n==0){
		cout<<"The fabocannic series is:"<< a;
	}
	else if(n==1){
		cout<<"The fabocannic series is:"<<b;
	}
	else
	  for(int i=2;i<=n;i++){
	  	next=a+b;
	  	a=b;
	  	b=next;
	  }
	  
	  cout<<"The fabocannic series is :"<< next<<endl;
		
	
	
	
	return 0;
}
