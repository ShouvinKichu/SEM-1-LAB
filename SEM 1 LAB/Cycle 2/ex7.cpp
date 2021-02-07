//Program to find "sum of natural numbers"

#include <iostream>
using namespace std;

int main()
{
  int a, sum;
  cin >> a;
  sum = 0;
  for (int i = 1; i <= a; ++i)
  {
    sum += i;
  }
  cout << sum;
  return 0;
}

//input: 5
//output:15