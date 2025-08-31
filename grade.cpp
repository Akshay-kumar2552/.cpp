                    //Develop a program that takes a student's score (0-100) as 
                  //input and prints the corresponding grade (e.g., A, B, C, D, F) 
                                 //based on a grading scale.

#include<iostream>
using namespace std;

int main(){
	int marks;
	
	cout<<"Enter the marks you got:";
	cin>>marks;
	
	if(marks<=0){
		cout<<"fail";
	}
	else if(marks<=20){
		cout<<"you got the 'F' grade.";
	}
	else if(marks<=40){
		cout<<"you got the 'E' grade.";
	}
	else if(marks<=60){
		cout<<"you got 'D' grade.";
	}
	else if(marks<=70){
		cout<<"you got 'C' grade.";
	}
	else if (marks<=85){
		cout<<"you got 'B' grade.";
	}
	else 
	cout <<"Congratulation!!   you got 'A' grade.";
	
	return 0;
	
	
}                                 
