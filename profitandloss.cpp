          // Write a program to ask user about the cost price and selling 
//price banana per dozen. Calculate the profit or loss earned 
//upon selling 25 bananas. 


#include<iostream>
using namespace std;

int main(){
	
	float costpriceperdozen, sellpriceperdozen;
	float costpriceperbananas,sellpriceperbananas;
	float profitloss,cp25,sp25;
	
	
	cout<<"Enter the cost price of bananas per dozens:";
	cin>>costpriceperdozen;
	
	cout<<"Enter the sell price of bananas per dozens:";
	cin>>sellpriceperdozen;
	
	costpriceperbananas=costpriceperdozen/12.0;
	
	cout<<"The costprice for per bananas:"<<costpriceperbananas<<endl;
	
	sellpriceperbananas=sellpriceperdozen/12.0;
	
	cout<<"The sellprice for per bananas:"<<sellpriceperbananas<<endl;
	
	cp25=costpriceperbananas*25;
	
	cout<<"The costprice for 25 bananas:"<<cp25<<endl;
	
	sp25=sellpriceperbananas*25;
	
	cout<<"The sell price for 25 bananas:"<<sp25<<endl;
	
	profitloss=sp25-cp25;
	
	if(profitloss>0){
		cout<<"we get profit of:"<<profitloss;
	
	}
		else if(profitloss<0){
			cout<<"we get loss of:"<<-profitloss;
}
	    else
	       
			{
			  cout<<"we get not any profit or loss:";
          }

return 0;	
}
