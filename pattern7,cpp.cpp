#include<iostream>
using namespace std;

int main(){
	int num=10;
	
	for(int i=0;i<num;i++){
		for(int j=0;j<num;j++){
			
			if(i==num-1||j==num-1||i==0||j==0)
			cout<<"*";
			else
			cout<<" ";
				
			
		}
		
		cout<<endl;
	}
	
	return 0;
}
