//C++ program to check whether a number is Armstrong number or not.
#include <iostream>
#include<math.h>
using namespace std;
int main()
{
   int i;
   int sum=0;
   cout<<"Please enter a number to check if armstrong : "<<endl;
   cin>>i;
   
   int originalnum=i;
   
   while(i > 0)
    {
    
      sum = sum + ( i % 10)*( i % 10 )*( i % 10);
      i = i /10;
    }
    if(sum == originalnum)
	{
       cout<<"Armstrong number"<<endl;
    }
    else
	{
       cout<<"Not Armstrong"<<endl;
    }
return 0;
}

