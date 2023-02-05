#include<iostream>
using namespace std;
int main()
{
	int score; //variable declaration
	cout<<"Enter your test score:"; //use words which shown as output
	cin>>score;
	if(score>=90) // condition for 90% or above
	cout<<"Your Grade is A";
	else if(score>=80)  //condition for 80% or above
	cout<<"Your Grade is B";
	else if(score>=70)  //condition for 70% or above
	cout<<"Your Grade is C";
	else if(score>=60)  //condition for 60% or above
	cout<<"Your Grade is D";
	else if(score>=50)  //condition for 50% or above
	cout<<"Your Grade is E";
	else
	cout<<"Your Grade is F";
	return 0;
	
	}
