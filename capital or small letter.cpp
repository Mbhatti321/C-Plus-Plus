#include<iostream> //library file
using namespace std; //standard for cout and cin
int main() //main function
{
	char letter;//variable declaration
			cout<<"Enter a letter:";// show output
		cin>> letter;// for input letter
		int result=islower(letter);
		cout<<"Result:"<<result<<endl;
		return 0;
		
}
