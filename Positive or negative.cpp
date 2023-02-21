#include<iostream>
using namespace std;
int main()
 {
  int num;// variable declaration of num
  cout << "Enter a number: ";//show in output
  cin >> num;// for input from user
  string name("Abdul Muneeb Bhatti\n");//Show my name in output
  cout<<name;
  
  if (num > 0)//condition for greater than zero
   {
    cout << "The number is positive." << endl;// positive number for greater than zero
  } else if (num < 0)//condition for less than zero
   {
    cout << "The number is negative." << endl;// negative number if the numbers are less than zero
  } else
   {
    cout << "The number is zero." << endl;//if the both conditions are not satisfied than the number is zero
  }
  
  for (int i = 0; i < num; i++) //using for loop to show all previous numbers which user give number as input
  {
    cout<<i<<" ";//using double quotes for spacing between numbers
  }
  cout << endl;
  
  return 0;
}

