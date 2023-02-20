//C++ Program to Calculate Area of Circle.
#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
	float radius , area;
	cout<<"Please Enter the radius of circle : "<<endl;
	cin>>radius;
	
	area = M_PI * radius * radius;
	
	cout<< "Area of the circle is : "<<area;
	
	return 0;
}
