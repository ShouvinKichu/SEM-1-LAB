//Program to arrange the given n elementa in an array in ascending and descending order

#include <iostream>
using namespace std;
class sort
{
  int a[15], n;

public:
  void init();
  void ascend();
  void descend();
  void display();
};

void sort::init()
{
  cin >> n;
  for (int i = 0; i < n; i++)

    cin >> a[i];
}

void sort::ascend()
{
  for (int i = 0; i < n - 1; i++)
  {
    int min = i;
    for (int j = i + 1; j < n; j++)
    {
      if (a[min] > a[j])
        min = j;
    }
    if (min != i)
    {
      int temp;
      temp = a[min];
      a[min] = a[i];
      a[i] = temp;
    }
  }
}

void sort::descend()
{
  for (int i = 0; i < n - 1; i++)
  {
    int min = i;
    for (int j = i + 1; j < n; j++)
    {
      if (a[min] < a[j])
        min = j;
    }
    if (min != i)
    {
      int temp;
      temp = a[min];
      a[min] = a[i];
      a[i] = temp;
    }
  }
}

void sort::display()
{
  for (int i = 0; i < n; i++)

    cout << a[i] << endl;
}

int main()
{
  sort s;
  s.init();
  s.ascend();
  s.display();
  s.descend();
  s.display();
  return 0;
}