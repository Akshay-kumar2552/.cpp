#include<iostream>
using namespace std;

int main(){
	for(int i=1;i<=5;i++){
		for(char ch='A';ch<'A'+i;ch++){
			cout<<ch;
		}
		cout<<endl;
	}
	
	return 0;
}
