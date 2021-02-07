//Write a program in C to compute the sine series

#include <stdio.h>
int main()
{
  int i, j, n, fact, sine = -1;
  float x, p, sum = 0;
  scanf("%f", &x);
  scanf("%d", &n);
  for (i = 1; i < n; i += 2)
  {
    p = 1;
    fact = 1;
    for (j = 1; j <= i; j++)
    {
      p = p * x;
      fact = fact * j;
    }
    sine = -1 * sine;
    sum += sine * p / fact;
  }
  printf("%f", sum);
  return 0;
}

//input:4 5
//output:-6.666667