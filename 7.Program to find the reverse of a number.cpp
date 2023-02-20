//7.Program to find the reverse of a number
#include<iostream>

using namespace std;
int main ()
{
	int  i , rev = 0 ;
	
	cout<<"Please Enter the number to find reverse : "<<endl;
	cin>>i;
	
	for( ; i>0 ; i= i / 10 )
    
       rev= (rev * 10) + i % 10 ;
	 cout<<"The reverse number is : "<<rev<<endl;
	
	return 0;
}

