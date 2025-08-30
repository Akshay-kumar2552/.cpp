              //loop 4:


#include<iostream>
using namespace std;

int main(){
	int i=0;
	
	while(i!=10)                                           //when the scope is not mentioned in the loop then 
	                                                         //it will considered only very first line or program inside the loop only 
		cout<<i++<<"";
		cout<<endl<<endl<<i++<<"";
	
	return 0;
}
