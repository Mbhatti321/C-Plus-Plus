#include<iostream>
using namespace std;
int main()
{
	string programs[5]={"BSCS","BSIT","MSCS","MSIT"};  /*string is data type and programs its variable name
	and the 5 in square brackets shows that the size of words which we use in braces*/
	programs[2]="Mphil";// we replace MSCS by Mphil by its position no. which is 2 because its starts from 0
	cout<<programs[2]; // we access the word whose locate on 2 
	return 0;
}
