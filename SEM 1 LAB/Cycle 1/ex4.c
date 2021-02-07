//Write a program in C to find sum of array of given integers

#include <stdio.h>
int main()
{
  int a[5] = {4, 10, 20, 34, 35};
  int i, sum = 0;
  for (i = 0; i < 5; i++)
  {
    sum = sum + a[i];
  }
  printf("%d", sum);
  return 0;
}

//std input: 2,10,20,34,35
//output: 103