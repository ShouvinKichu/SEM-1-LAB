//Write a program in C to find exponentiation of a given values

#include <stdio.h>
int main()
{
  int base, exp;
  int result = 1;

  scanf("%d", &base);
  scanf("%d", &exp);
  while (exp != 0)
  {
    result *= base;
    --exp;
  }
  printf("%d", result);
  return 0;
}

//input: 10 2
//output: 100