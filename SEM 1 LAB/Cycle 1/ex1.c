//Write a program in C to find GCD of given values

#include <stdio.h>
int main()
{
  int i, n1 = 81, n2 = 153, gcd;
  for (i = 1; i < n1 && i <= n2; i++)
  {
    if (n1 % i == 0 && n2 % i == 0)
    {
      gcd = i;
    }
  }
  printf("%d", gcd);
  return 0;
}

//std input: 81 153
//output: 9