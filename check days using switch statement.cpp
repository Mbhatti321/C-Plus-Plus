#include<iostream>
using namespace std;
int main()
{
	int day; //variable declare
	cout<<"day:"; // its show in output 
	cin>>day; // for user input
	switch(day)
	{
		case 1:
		cout<<"Monday";	// input 1 then show Monday
		break;
		case 2:
		cout<<"Tuesday";	// input 2 show tuesday	
		break;
		case 3:
		cout<<"Wednesday"; //input 3 show wednesday
		break;
		case 4:
		cout<<"Thursday"; //input 4 show thursday
		break;
		case 5:
		cout<<"Friday"; // input 5 show friday
		break;
		case 6:
		cout<<"Saturday"; // input 6 show saturday
		break;
		case 7:
		cout<<"Sunday"; // input 7 show Sunday
		break;
		default:
			cout<<"Invalid Input"; // except 1-7 whatever you give as input it shows invalid input
			return 0;
		
	}
}
