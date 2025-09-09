#include<iostream>
using namespace std;

int main(){
	int low,high;
	
	cout<<"Emter the two numbers:";
	cin>>low>>high;
	
	for(int num=low;num<=high;num++){
		
		if(num<2){
			continue;
		}
		  bool isprime=true;
		for(int i=2;i<=num/2;i++){
		   if(num%i==0){
		   	isprime=false;
		   }
		}
   if(isprime){
   	cout<<num<<"  ";
   }

	}
  	
	return 0;
}
