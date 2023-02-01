#include<iostream>
using namespace std;
int main()
{
	int num1, num2;
	char x;
	while(true)
	{
		string name="Muneeb Bhatti"; // Name of student
		string Id="bsf2205769";// Roll no. of student

	cout<<"Enter 1st Number"<<endl;
	cin>>num1;
	cout<<"Enter 2nd Number"<<endl;
	cin>>num2;
	cout<<"My Name is:"<<name<<endl;
	cout<<"My Roll no. is:"<<Id<<endl; 
	cout<<"press a for addition\n";
	cout<<"Press b for subtraction\n";
	cout<<"Press c for multiplication\n";
	cout<<"Press d for division\n";
	cout<<"Press e for remainder\n";
	cin>>x;
	if(x=='a')
	cout<<"The Sum="<<num1+num2<<endl;// sum of 2 numbers
	else if(x=='b')
	cout<<"The Subtraction="<<num1-num2<<endl;// Subtaction of 2 numbers
	else if(x=='c')
	cout<<"The Multiplication="<<num1*num2<<endl;// Multiplication of 2 numbers
	else if(x=='d')
	cout<<"The Division="<<num1/num2<<endl;// division of 2 numbers
	else if(x=='e')
	cout<<"The Remainder="<<num1%num2<<endl;// remainder between 2 numbers
	else
	cout<<"Invalid operation="<<endl;// invalid if all the above conditions are not true
		}
	return 0;
}
