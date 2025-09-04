#include<iostream>
using namespace std;

int main(){
	int month, year;     
	cout<<"Enter the month(1-12):";
	cin>>month;
	
	cout<<"Enter the year:";
	cin>>year;
	
	int days;
	
	for(int i=1;i<=12;i++){
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
		
		cout<<"days=31";}
		else if(i==4||i==6||i==9||i==11){
		
		cout<<"days=30";}
		else if(i==2){
			if((year%400==0)||(year%4==0&&year%100!=0)){
				days=29;
			}
			else{
				days=28;
			}
		}
	}
	
	if(days>0)
	cout<<"number of days="<<days<<endl;
	else
	cout<<"Invalid month!"<<endl;
	
	return 0;
}
