#include<iostream>
using namespace std;
int main()
{
	string name="Abdul Muneeb Bhatti\n";// display name as output
	cout<<name;
	int a,b;
	cout<<"Enter Any Number:";// it is shown in output
	cin>>a;
	for(b=1; b<=10; b++)/* condition of for loop 1st initialize a value then condition and then increment*/
	cout<<a<<"*"<<b<<"="<<a*b<<"\n";
	return 0;
}
