//Write a C Program to find the given number is prime number or not using function

#include <stdio.h>

int check_prime(int);
int main()
{
  int n, result;
  scanf("%d", &n);
  result = check_prime(n);
  if (result == 1)
  {
    printf("Prime\n");
  }
  else
  {
    printf("Not Prime\n");
  }
  return 0;
}

int check_prime(int a)
{
  int c;
  for (c = 2; c <= a - 1; c++)
  {
    if (a % c == 0)
      return 0;
  }
  return 1;
}

//input: 7
//output: Prime