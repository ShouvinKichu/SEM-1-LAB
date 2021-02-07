//Develop a C++ application to find the kth smallest Element

#include <iostream>
using namespace std;
class find_kth_small
{
  int a[15], n, k, res;

public:
  void init();
  void find();
  void display();
};

void find_kth_small::init()
{
  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> a[i];
  cin >> k;
}

void find_kth_small::find()
{
  int min;
  for (int i = 0; i < n; i++)
  {
    min = i;
    for (int j = i + 1; j < n; j++)
      if (a[min] > a[j])
        min = j;
    if (min != i)
    {
      int temp;
      temp = a[i];
      a[i] = a[min];
      a[min] = temp;
    }
  }
}

void find_kth_small::display()
{
  cout << a[k - 1];
}

int main()
{
  find_kth_small s;
  s.init();
  s.find();
  s.display();
  return 1;
}