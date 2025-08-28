                //Write a program to input a character from the user and print its ASCII code


#include<iostream>
using namespace std;

int main(){
	
	char character;
	
	cout<<"Enter the character:";
	cin>>character;
	
	cout<<"ASCII valur for the given character:"<<character<<"="<<int(character)<<endl;
	
	return 0;
	
}
