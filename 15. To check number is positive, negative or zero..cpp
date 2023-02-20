//15. C++ program to check number is positive, negative or zero.
#include<iostream>
using namespace std;
int main()
{
	int number;
	cout<<"Please Enter the Number : "<<endl;
	cin>>number;
	
	if( number > 0 )
	cout<<number<<" is a Positive Number";
	else if( number < 0)
		cout<<number<<" is a Negative Number";
	else
		cout<<number<<" is Zero";

    return 0;
}
