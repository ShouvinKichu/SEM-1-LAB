//Write a program in C for find reversing the digits of an given integer

#include <stdio.h>
int main()
{
  int n = 45, rev = 0, remainder;
  while (n != 0)
  {
    remainder = n % 10;
    rev = rev * 10 + remainder;
    n /= 10;
  }
  printf("%d", rev);
  return 0;
}

//std input: 45
//output: 54