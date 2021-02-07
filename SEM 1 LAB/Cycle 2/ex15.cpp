//Develop a C++ application to to perform addition and multiplication operations over the matrix of order 3 * 3.

#include <iostream>
using namespace std;

class matrix
{
public:
  int a[3][3], b[3][3], c[3][3], d[3][3];

  void init()
  {
    for (int i = 0; i < 3; i++)
      for (int j = 0; j < 3; j++)
        cin >> a[i][j];

    for (int i = 0; i < 3; i++)
      for (int j = 0; j < 3; j++)
        cin >> b[i][j];
  }
  void addition()
  {
    for (int i = 0; i < 3; i++)
      for (int j = 0; j < 3; j++)
        c[i][j] = a[i][j] + b[i][j];
  }
  void multiplication()
  {
    for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < 3; j++)
      {
        d[i][j] = 0;
        for (int k = 0; k < 3; k++)
        {
          d[i][j] += a[i][k] * b[k][j];
        }
      }
    }
  }
  void display()
  {
    for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < 3; j++)
        cout << c[i][j] << " ";
      cout << endl;
    }
    for (int i = 0; i < 3; i++)

    {
      for (int j = 0; j < 3; j++)
        cout << d[i][j] << " ";
      cout << endl;
    }
  }
};

int main()
{
  matrix m;
  m.init();
  m.addition();
  m.multiplication();
  m.display();
  return (0);
}