#include<iostream>
using namespace std;
int main()
{
	int time;
	cout<<"Enter your time";
	cin>>time;
	if(time>6 && time<12)
	{
		cout<<"Good Morning";
	}
	else if (time>=12 && time<16)
	{
		cout<<"Good Afternoon";
	}
	else if (time>=16 && time<22)
	{
		cout<<"Good Evening";
	}
	else 
	{
		cout<<"Good Night";
	}
		
	return 0;
	
}
