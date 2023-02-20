//C++ Program to Calculate Area of rectangle.
#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
	int length , width , area ;
	cout<<"Please Enter the value of length : "<<endl;
	cin>>length;
	
	cout<<"Please the value of width : "<<endl;
	cin>>width;
	area = length * width;
	
	cout<< "Area of the Rectangle is : "<<area;
	
	return 0;
}

