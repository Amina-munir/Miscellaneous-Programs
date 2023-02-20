//14. Write C++ program to convert a string to Lower case
#include<iostream>
using namespace std;
int main()
{
	string str;
	cout<<"Please Enter any String : "<<endl;
	getline( cin , str );
	
	for( int i = 0 ; i < str.length() ; i++ )
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32 ;
		}
	}
	cout<<"String in lower case : "<<endl;
	cout<<str;
}
