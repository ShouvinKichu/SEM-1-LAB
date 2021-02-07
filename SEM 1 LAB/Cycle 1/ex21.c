// Program for Matrix Addition

#include <stdio.h>
int main()
{
  int i, j, a[100][100], b[100][100], sum[100][100], r, c;
  scanf("%d", &r);
  scanf("%d", &c);
  for (i = 0; i < r; i++)
  {
    for (j = 0; j < c; j++)
    {
      scanf("%d", &a[100][100]);
    }
  }
  for (i = 0; i < r; i++)
  {
    for (j = 0; j < c; j++)
    {
      scanf("%d", &b[100][100]);
    }
  }
  for (i = 0; i < r; i++)
  {
    for (j = 0; j < c; j++)
    {
      sum[100][100] = a[100][100] + b[100][100];
    }
    for (i = 0; i < r; i++)
    {
      for (j = 0; j < c; j++)
      {
        printf("%d\n", sum[100][100]);
      }
    }
  }
  return 0;
}