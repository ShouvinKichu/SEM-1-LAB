//1Program to delete n characters from specific position i from the given string

using namespace std;
#include <iostream>
class string1
{

  char a[50];
  int n, i;

public:
  void init();
  void delet();
  void display();
};

void string1::init()
{
  cin >> a;
  cin >> n >> i;
}

void string1::delet()
{
  int l = 0, j, o;
  while (a[l] != '\0')
  {
    l++;
  }
  l--;
  j = i;
  o = i + n;
  while (o <= l)
  {
    a[j] = a[o];
    j++;
    o++;
  }
  a[j] = '\0';
}

void string1::display()
{
  cout << a;
}

int main()
{
  string1 s;
  s.init();
  s.delet();
  s.display();
  return 0;
}