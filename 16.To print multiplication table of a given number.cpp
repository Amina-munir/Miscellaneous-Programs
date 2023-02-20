//16. Write C++ program to print multiplication table of a given number
#include<iostream>
using namespace std;
int main()
{
	int number , multiplier ;
	cout<<"Please Enter the Number "<<endl;
	cin>>number;
	
	for( multiplier = 1 ; multiplier <= 10 ; multiplier++)
	{
			cout<<number<<" * "<<multiplier<<" = "<<( number * multiplier )<<endl;

	}
		return 0;
}
