//Write a C program to find length and breadth and its perimeter

#include <stdio.h>
int main()
{
  float l, w, p;
  scanf("%f", &l);
  scanf("%f", &w);
  p = 2 * (l + w);
  printf("%f", p);
  return 0;
}

//input: 5 7
//output:24.0000