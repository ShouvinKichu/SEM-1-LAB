//Write a C program to perform all the arithmetic operations for any two given two numbers

#include <stdio.h>
int main()
{
  int num1, num2;
  int sum, sub, mult, mod;
  float div;
  scanf("%d%d", &num1, &num2);
  sum = num1 + num2;
  sub = num1 - num2;
  mult = num1 * num2;
  div = (float)num1 / num2;
  mod = num1 % num2;
  printf("%d\n", sum);
  printf("%d\n", sub);
  printf("%d\n", mult);
  printf("%.2lf\n", div);
  printf("%d\n", mod);
  return 0;
}

//input: 10 5
//output: 15 5 2.00 0