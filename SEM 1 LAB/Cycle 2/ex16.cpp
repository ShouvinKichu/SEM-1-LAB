//Develop a C++ application to finding factorial of a given number

#include <iostream>
using namespace std;

class factorial
{
public:
  int n, n1, f = 1;

  void inti()
  {
    cin >> n;
  }
  void calc()
  {
    while (n != 0)
    {
      f = f * n;
      n = n - 1;
    }
  }
  void dispay()
  {
    cout << f;
  }
};

int main()
{
  factorial obj;
  obj.inti();
  obj.calc();
  obj.dispay();
}