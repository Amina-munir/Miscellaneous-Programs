//Can you check whether a number is prime or not?
#include<iostream>

using namespace std;
int main ()
{
	int num , i ,count=0 ;
	
	cout<<"Please Enter the number : "<<endl;
	cin>>num;
	
	for(i=1 ; i<=num ; i++ )
    {
    	if(num % i == 0)
     {
     	count ++;
	 }
	} 
	if(count==2)
	   {
	 	cout<<"The number is Prime : "<<endl;
	   }
	else
	 cout<<"The number is not Prime : "<<endl;
	
	return 0;
}

