//Write a C program to generate prime numbers in the given interval

#include <stdio.h>
int main()
{
  int n, fact, m = 1;
  scanf("%d", &n);
  for (int i = m; i <= n; i++)
  {
    fact = 0;
    for (int j = 1; j <= i; j++)
    {
      if ((i % j) == 0)
      {
        fact++;
      }
    }
    if (fact == 2)
      printf("%d\n", i);
  }
  return 0;
}

//input: 10
//output: 2 3 5 7