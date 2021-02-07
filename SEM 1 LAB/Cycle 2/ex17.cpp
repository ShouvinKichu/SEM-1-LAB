//Program to find the position of a given integer using linear search method

#include <iostream>
using namespace std;
class LS
{
public:
  void LinearSearch(int arr[], int value, int i, int n)

  {
    int found = 0;
    for (i = 0; i < n; i++)
    {
      if (value == arr[i])
      {
        found = 1;
        break;
      }
    }
    if (found == 1)
    {
      cout << i;
    }
    else
    {
      cout << "Element is not present in the array.";
    }
  }
};
int main()
{
  int num;
  int i, keynum;

  cin >> num;
  int array[num];

  for (i = 0; i < num; i++)
  {
    cin >> array[i];
  }

  cin >> keynum;
  LS l1;

  l1.LinearSearch(array, keynum, i, num);
  return 0;
}