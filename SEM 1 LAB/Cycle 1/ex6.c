//Write a program in C to find the fibonacci series

#include <stdio.h>
int main()
{
  int i, n = 5, t1 = 0, t2 = 1, nextterm;
  for (i = 1; i <= n; ++i)
  {
    printf("%d \n", t1);
    nextterm = t1 + t2;
    t1 = t2;
    t2 = nextterm;
  }
  return 0;
}

//std input: 5
//output: 0 1 1 2 3