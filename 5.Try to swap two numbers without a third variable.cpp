//Try to swap two numbers without a third variable.
#include<iostream>

using namespace std;
int main ()
{
	int number1 , number2 , temp ;
	cout<<"Please Enter the value of number1 : "<<endl;
	cin>>number1;
	
	cout<<"Please Enter the value of number2 : "<<endl;
	cin>>number2;
	//print before swapping
	cout<<"Before swapping, numbers are : "<<endl;
	cout<<"\t\n 1st number = "<<number1<<" , 2nd number = "<<number2<<endl;
	
	//swapping without any third variable 
	number1 = number1 + number2 ;  //let num1= 5 num2= 3 then num1=8
	number2 = number1 - number2 ;  //now num1 = 8 and num2 = 5
	number1 = number1 - number2 ;  //then num1= 3 and num2 = 5
	
	//print after swapping
	cout<<"\nAfter swapping, numbers are : "<<endl;
	cout<<"\t\n 1st number = "<<number1<<" , 2nd number = "<<number2<<endl;
	
	return 0;
}

