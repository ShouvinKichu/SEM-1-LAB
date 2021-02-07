//Write a C program to enter radius of a circle and find its diameter, circumference and area using function

#include <stdio.h>

float diameter(int radius)
{
  float dia = 2 * radius;
  return dia;
}

float circumference(int radius)
{
  float cir = 2 * 3.14 * radius;
  return cir;
}

float area(int radius)
{
  float a = 3.14 * radius * radius;
  return a;
}

int main()
{
  int radius;
  scanf("%d", &radius);
  printf("Diameter of a circle = %.2lf\n\n", diameter(radius));
  printf("Circumference of a circle = %.2lf\n\n", circumference(radius));
  printf("Area of a circle= %.2lf\n\n", area(radius));
  return 0;
}

//input: 15
//output: Diameter of a circle = 30.00   Circumference of a circle = 94.20   Area of a circle= 706.50