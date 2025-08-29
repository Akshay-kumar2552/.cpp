#include<iostream>
#include<string>
using namespace std;

int main(){
	string name;
	
	cout<<"Enter your name:";
	getline(cin,name);
	cout<<"the length of given string is:"<<name.length();
	
	cout<<"ASCII code for your name is:";
	for(int i=0;i<name.length();i++)
	  cout<<name[i]<<"="<<int(name[i])<<endl;
	
	
	
	
	return 0;
}
