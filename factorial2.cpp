#include<iostream>
using namespace std;
int main(){
	int n;
	long long factorial = 1 ;
	
	cout<<"Enter the number:";
	cin>>n;
	
	if(n<0){
		cout<<"The factorial of negative number is not possible,";
		}
		else{
			for(int i=1; i<=n; i++){
				factorial*=i;
			}
			cout<<"the factorial of "<<n<<" ="<<factorial<<endl;
		}
	return 0;
}
