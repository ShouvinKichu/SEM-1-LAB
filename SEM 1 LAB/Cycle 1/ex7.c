//Write a program in C to find the roots of a quadratic equation

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int a, b, c, discriminant;
  double r1, r2;

  scanf("%d%d%d", &a, &b, &c);
  discriminant = (b * b) - (4 * a * c);
  if (discriminant > 0)
  {
    r1 = (-b + pow(discriminant, (1 / 2))) / (2 * a);
    r2 = (-b - pow(discriminant, (1 / 2))) / (2 * a);
    printf("%2lf\n%.2lf", r1, r2);
  }
  else if (discriminant == 0)
  {
    r1 = -b / (2 * a);
    r2 = r1;
    printf("%.2lf\n%.2;f", r1, r2);
  }
  return 0;
}