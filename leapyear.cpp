                        //Write a program that takes a start year and an end year 
                    //from the user and prints all the leap years in that range. 
                    
#include<iostream>
using namespace std;

int main(){
	int startyear,endyear;
	
	cout<<"Enter the startyear:";
	cin>>startyear;
	
	cout<<"Enter the end year:";
	cin>>endyear;
	
	for(int year=startyear;year<=endyear;year++){
		if((year % 400 == 0)||(year % 4 == 0 && year % 100 != 0))
			{
			
			cout<<year;
	}
	cout<<" ";
	}
	
return 0;	
}                
