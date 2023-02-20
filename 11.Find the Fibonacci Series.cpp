//11.Find the Fibonacci Series
#include <iostream>
                   
using namespace std;
int main()
{
   int n , x ,y , z;
   int count = 0;
   cout<<"Please Enter number of terms : "<<endl;
   cin>>n;
   
   x = 0;
   y = 1;
   z = 0;
   
   cout<<"Fibonacci Series : ";
   while( count < n  )
   {
   	cout<<z<<"\t";
   	    x = y;
   	    y = z;
   	    z = x+y;
   	    count = count + 1;
   }
   return 0;
}

