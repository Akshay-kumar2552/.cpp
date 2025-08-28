
             //ASCII code for a string 
             


#include<iostream>
#include<string>
using namespace std;

int main(){
	
	string name;
	
	cout<<"Enetr your name:";
	getline(cin,name);
	
	cout<<"The length of your name is:"<<name.length()<<endl;
	
	cout<<"The ASCII code for your name is:"<<endl;
	for(int i=0;i<name.length();i++)
	{
		cout<<name[i]<<"="<<int(name[i])<<endl;
	}
	
	
	
	return 0;
}
