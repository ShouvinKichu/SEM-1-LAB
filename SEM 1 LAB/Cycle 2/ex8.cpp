//Program to "check the given number is odd or even"

#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  if (n % 2 == 0)
    cout << "even";
  else
    cout << "odd";
  return 0;
}

//input:1221
//output:odd