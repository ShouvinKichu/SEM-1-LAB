//Write a C program to find out the size of the given data

#include <stdio.h>
int main()
{
  short int intType;
  scanf("%hd", &intType);
  float floatType;
  scanf("%f", &floatType);
  char charType;
  scanf("%c", &charType);
  double doubleType;
  scanf("%lf", &doubleType);
  printf("%zu\n", sizeof(intType));
  printf("%zu\n", sizeof(floatType));
  printf("%zu\n", sizeof(charType));
  printf("%zu\n", sizeof(doubleType));
  return 0;
}

//input: 5 2.00 a 3.14
//output: 2 4 1 8