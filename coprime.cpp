#include<iostream>
using namespace std;
int main(){
	int a,b,hcf;
	
	cout<<"Enter two numbers:";
	cin>>a>>b;
	
	for(int i=1;i<=a && i<=b;i++){
		if(a%i==0 && b%i==0){
			hcf=i;
		}
	}
	
	if(hcf==1){
		cout<<"the nubers are coprime numbers.";
	}
	else
	 cout<<"the numbers are not coprime numbers.";
	
	
	return 0;
}
