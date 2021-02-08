//1Program to delete n characters from specific position i from the given string

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
  {
    cin >> a[i];
  }
}
void sort::ascend()
{
  for (int i = 0; i < n - 1; i++)
  {
    int min = i;
    for (int j = i + 1; j < n; j++)
    {
      if (a[min] > a[j])
      {
        min = j;
      }
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
      {
        min = j;
      }
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
  {
    cout << a[i] << endl;
  }
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

//input: 6 7 6 5 9 1 4
//output: 1 4 5 6 7 9 9 7 6 5 4 1