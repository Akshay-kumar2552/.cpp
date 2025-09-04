#include<iostream>
using namespace std;

int main(){
    int  num=5;
	
	
	 for(int i=1;i<=num;i++){
	 	for(int space=1;space<=num-1;space++){
	 		cout<<"  ";
		 }
		 
		 for(int j=1;j<=i;j++){
		 	
		 	cout<<j<<"  ";
		 }
		 cout<<endl;
	 }


return 0;
}
