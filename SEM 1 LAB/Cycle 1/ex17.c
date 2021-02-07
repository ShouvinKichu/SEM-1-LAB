//Write a C Program to find the given number is odd or even using function

#include <stdio.h>
int main()
{
  int num;
  scanf("%d", &num);
  if (num % 2 == 0)
  {
    printf("Even");
  }
  else
  {
    printf("Odd");
  }
  return 0;
}

//input: 1221
//output: odd