//Program "To check the leap year"

#include <iostream>
using namespace std;

int main()
{
  int year;
  cin >> year;
  if (year % 4 == 0)
    cout << "leap year";
  else
    cout << "Not a leap year";
  return 0;
}

//input:2002
//output:Not a leap year