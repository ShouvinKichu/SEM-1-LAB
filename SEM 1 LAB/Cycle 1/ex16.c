//Write a C program to swap two numbers using function
#include <stdio.h>
int main()
{
  int x, y;
  scanf("%d", &x);
  scanf("%d", &y);
  int temp = x;
  x = y;
  y = temp;
  printf("%d\n%d", x, y);
  return 0;
}

//input: 25 50
//output: 50 25