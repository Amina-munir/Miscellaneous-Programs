//9.Find the factorial of a number
#include<iostream>

using namespace std;
int main()
{
	int n , fact = 1;
	cout<<"Please Enter the number to find factorial : "<<endl;
	cin>>n;
	

    if( n == 0 )
    cout<<"\n Factorial = 1";
    
    else if ( n < 0)
    cout<<"\n Factorial of negative not possible.";
    
    else 
    {
    	for( ; n >= 1 ; n = n - 1 )
    	fact = fact * n;
    	cout<<"\nFactorial = "<<fact;
	}
	 return 0;
}
