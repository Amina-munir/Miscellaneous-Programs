//8.can you try to check whether a number is a palindrome or not?
#include<iostream>

using namespace std;
int main()
{
	int i , rev , orig ;
	cout<<"Please Enter the number to check if Palindrome: "<<endl;
	cin>>i;
	orig = i;
	
	
	for( ; i>0 ; i= i / 10 )
    
       rev= (rev * 10) + i % 10 ;
       
    if( orig == rev )
	 cout<<"The number is Palindrome ."<<endl;
	 else
	 cout<<"The number is not Palindrome ."<<endl;
	 return 0;
}
