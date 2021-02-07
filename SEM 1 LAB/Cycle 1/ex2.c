//Write a program in C to find out the max and min values in the given three numbers

#include <stdio.h>
int main()
{
  int a = 10, b = 20, c = 30;
  if (a > b && a > c)
    printf("%d", a);
  else if (b > a && b > c)
    printf("%d", b);
  else
    printf("%d", c);
  if (a < b && a < c)
    printf("%d", a);
  else if (b < a && b < c)
    printf("%d", b);
  else
    printf("%d", c);
  return 0;
}

//std input: 10 20 30
//output:30 10