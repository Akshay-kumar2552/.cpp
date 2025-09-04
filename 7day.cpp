#include<iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter the day details:";
	cin>>num;
	
	if(num==1)
	 cout<<"moday.";
	 else if(num==2)
	  cout<<"tuesday";
	   else if(num==3)
	    cout<<"wednesday";
	     else if(num==4)
	       cout<<"thrusday";
		   else if(num==5)
	        cout<<"friday";
	         else if(num==6)
	          cout<<"saturday";
	           else if(num==7)
	            cout<<"sunday";
	            
	            else
	            cout<<"The invaild day details.";
	           
	return 0;
}
