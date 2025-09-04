#include<iostream>
using namespace std;

int main(){
	
	int num=6;
	
for(int i=0;i<=num;i++){
	for(int j=0;j<=num;j++){
	
	if(j==3 || i==3||j==0&&i<=2||j>=4&&i==0||j<=2&&i==6||j==6&&i>=4)
		cout<<"*";
	
	else 
	  cout<<" ";
}
     cout<<endl;
}
	
	
return 0;	
}
