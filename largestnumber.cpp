#include<iostream>
using namespace std;

int main(){
	int a,b,c,d;
	
	cout<<"Enter the four integres: ";
	cin>>a>>b>>c>>d;
	int largest=a;
	if(b>largest)
       largest = b;
	if(c>largest)
	   largest= c;
	if(d>largest)
	largest = d;
	
	cout<<"The largest value is:"<<largest;
		
	return 0;
}
