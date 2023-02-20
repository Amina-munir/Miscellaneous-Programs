//Try to swap two numbers with a third variable.
#include<iostream>

using namespace std;
int main ()
{
	int number1 , number2 , temp ;
	cout<<"Please Enter the value of number1 : "<<endl;
	cin>>number1;
	
	cout<<"Please Enter the value of number2 : "<<endl;
	cin>>number2;
	//print before swapping
	cout<<"Before swapping numbers are : "<<endl;
	cout<<"\t\n number1 = "<<number1<<" , number2 = "<<number2<<endl;
	
	//swapping
	temp = number1;
	number1 = number2;
	number2 = temp;
	
	//print after swapping
	cout<<"After swapping number1= " <<number1<<" number2 = "<<number2<<endl;
	
	return 0;
}

