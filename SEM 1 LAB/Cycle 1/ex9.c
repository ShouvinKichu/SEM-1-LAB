//Write a C program to find the smallest divisor of an integer

#include <stdio.h>
int main()
{
  int n = 25, i;
  for (i = 2; i < n; i++)
  {
    if (n % i == 0)
      break;
  }
  printf("%d", i);
  return 0;
}

//std input: 25
//output: 5