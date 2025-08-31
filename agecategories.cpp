                   //Create a program that takes a person's age as input and 
                    //classifies them into different age groups (e.g., child, 
                                 //teenager, adult, senior).

#include<iostream>
using namespace std;

int main(){
	
	int age;
	
    cout<<"Enter your age:";
    cin>>age;
    
    if(age<=0){
       cout<<"invalid age.";
	}
	else if(age<=12){
		cout<<"yor are a child.";
		}
		else if(age<=18){
			cout<<"you are a teenager.";
		}
		else if(age<=50){
			cout<<"you are a adult.";
		}
		else
		   cout<<"you are a senior citizen.";
	
	return 0;
}                                 
