#include<iostream>
using namespace std;
int main(){
	int num1,num2,max;
	cout<<"Enter the numbers:";
	cin>>num1>>num2;
	
	max=(num1>num2)?num1:num2;
	
	while(true){
		if(max%num1==0 && max%num2==0){
			cout<<"The LCM for twoo numbers"<<num1<< "and"<< num2<<"is"<<max<<endl;
			break;
		}
		max++;
	}
	
	
	return 0;
}
