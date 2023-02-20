//20.Write C++ program to change string to lower case without strlwr

#include<iostream>
using namespace std;
int main()
{
	char a[100];
	int i ;
	cout<<"Please Enter the String in uppercase : "<<endl;
    cin.getline(a , 100);
    cout<<"String in Lower case is ";
	
	for( i = 0 ; a[i] != '\0' ; i++ )
	{
		if( a[i]>= 'A' && a[i]<= 'Z')
		{
			a[i] = a[i] +  32 ;
		}
		cout<<a[i];
	}
	cout<<endl;
    return 0;
}
