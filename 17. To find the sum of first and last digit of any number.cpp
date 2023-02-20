//17. Write C++ program to find the sum of first and last digit of any number
#include<iostream>
using namespace std;
int main()
{
	int first , last , N  ,sum=0;
	cout<<"Please Enter the Number : "<<endl;
	cin>>N;
	last = N % 10;
	first = N;
	while( first >= 10)
	{
	   first = first/ 10;
	}
	sum = first + last ;
	cout<<"Sum of first & last digit of given number is "<<sum;
	
	


    return 0;
}
