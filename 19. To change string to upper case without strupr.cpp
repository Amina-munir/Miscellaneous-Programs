//19. Write C++ program to change string to upper case without strupr

#include<iostream>
using namespace std;
int main()
{
	char a[100];
	int i ;
	cout<<"Please Enter the String in lowercase : "<<endl;
    cin.getline(a , 100);
    cout<<"String in Uppercase is ";
	
	for( i = 0 ; a[i] != '\0' ; i++ )
	{
		if( a[i]>= 'a' && a[i]<= 'z')
		{
			a[i] = a[i] - 32;
		}
		cout<<a[i];
	}
	cout<<endl;
    return 0;
}
