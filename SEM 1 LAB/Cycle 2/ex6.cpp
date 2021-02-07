//6.Program to swap two numbers swapping two numbers

#include <iostream>
using namespace std;
int main()
{
  int a, b, c;
  cin >> a >> b;
  c = a;
  a = b;
  b = c;
  cout << a << b << endl;
  return 0;
}

//input: 25 50
//output: 50 25