//Develop a C++ application to remove the duplicates in an ordered array given.

#include <iostream>
using namespace std;
class dup_eli
{
  int a[15], n;

public:
  void init();
  void eliminate();
  void display();
};

void dup_eli::init()
{
  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> a[i];
}

void dup_eli::eliminate()
{
  int i, j;
  i = 1;
  while (a[i - 1] != a[i])
    i++;
  j = i - 1;
  while (i < n - 1)
  {
    i++;
    if (a[i - 1] != a[i])
    {
      j++;
      a[j] = a[i];
    }
  }
  n = j + 1;
}

void dup_eli::display()
{
  for (int i = 0; i < n; i++)
    cout << a[i] << endl;
}

int main()
{
  dup_eli s;
  s.init();
  s.eliminate();
  s.display();
  return 1;
}