//C++ Program to convert days to years, weeks and days.
#include<iostream>

using namespace std;
int main()
{

   int days, years, weeks, remainder;
   cout << "Enter the number of days: ";
   cin >> days;

   years = days / 365;
   remainder = days % 365;
   weeks = remainder / 7;
   remainder = remainder % 7;

   cout << days << " days is equivalent to " << years << " years, " << weeks << " weeks, and " << remainder << " days." << endl;
   return 0;
}

