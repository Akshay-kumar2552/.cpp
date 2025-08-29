//Write a program to input three characters from the user and 
//display characters with their corresponding ASCII codes. 

#include<iostream>
#include<string>

using namespace std;

int main(){
	
	char ch1,ch2,ch3;
	
	cout<<"Enter the character 1 :";
	cin>>ch1;
	
	cout<<"Enter the character 2 :";
	cin>>ch2;
	
	cout<<"Enter the character 3:";
	cin>>ch3;
	
	cout<<ch1<<"="<<int(ch1)<<endl;
	cout<<ch2<<"="<<int(ch2)<<endl;
	cout<<ch3<<"="<<int(ch3)<<endl;
	
	
	return 0;
}
