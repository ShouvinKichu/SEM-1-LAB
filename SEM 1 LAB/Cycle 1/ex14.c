//Write a C program to perform simple structure of a function for addition program

#include <stdio.h>

int add(int num1, int num2)
{
  int sum;
  sum = num1 + num2;
  return sum;
}

int main()
{
  int n1, n2, result;
  scanf("%d%d", &n1, &n2);
  result = add(n1, n2);
  printf("%d\n", result);
  return 0;
}

//input: 50 50
//output: 100