//18. C++ Program to find the largest number among three number
#include<iostream>
using namespace std;
int main()
{
	int num1 , num2 , num3 ;
	cout<<"Please Enter the first Number : "<<endl;
	cin>>num1;
	
	cout<<"Please Enter the second Number : "<<endl;
	cin>>num2;
	cout<<"Please Enter the third Number : "<<endl;
	cin>>num3;
	
	if( num1 >= num2 && num1 >= num3)
	cout<<num1<<" is Largest Number";
	
	if( num2 >= num1 && num2 >= num3)
	cout<<num2<<" is Largest Number";
	
	if( num3 >= num2 && num3 >= num1)
	cout<<num3<<" is Largest Number";
    return 0;
}
