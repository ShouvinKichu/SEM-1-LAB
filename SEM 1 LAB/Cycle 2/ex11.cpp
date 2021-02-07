//Program to perform Raising the number to larger power x ^ n

#include <iostream>
using namespace std;

int main()
{
  int exponent;
  float base, result = 1;
  cout << "";
  cin >> base >> exponent;
  cout << "";
  while (exponent != 0)
  {
    result *= base;
    --exponent;
  }
  cout << result;
  return 0;
}

//input: 2 4
//output: 16