#include<iostream>
using namespace std;
int main(){
	int n,a,b,next;
	cout<<"Enter the N:";
	cin>>n;
	
	cout<<"the fabocannic series is :"<<endl;
	
	for(int i=0;i<=n;i++){
		
		cout<<a<<"  ";
		next=a+b;
		a=b;
		b=next;
	}
	
	
	
	return 0;
}
