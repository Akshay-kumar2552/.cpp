#include<iostream>
#include<string>
using namespace std;

int main(){
	
    string Date;
	
	cout<<"Enter the date in the format of DD/MM/YYYY:";
	cin>>Date;
	
	
	string day=Date.substr(0,2);
	string month=Date.substr(2,2);
	string year=Date.substr(4,4);
	
	cout<<"Day-"<<day<<",month-"<<month<<",year-"<<year<<endl;
	
	return 0;
	
	
}
