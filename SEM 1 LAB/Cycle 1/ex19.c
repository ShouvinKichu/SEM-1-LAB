//Write a C Program to find the largest number in an given array using function

#include <stdio.h>
int main()
{
  int i, arr[40], largest = 0;
  for (i = 0; i < 4; i++)
  {
    scanf("%d", &arr[i]);
  }
  for (i = 0; i < 4; i++)
  {
    if (arr[i] > arr[i + 1])
    {
      largest = arr[i];
    }
  }
  printf("%d", largest);
  return 0;
}

//ALTERNATE METHOD

/* #include <stdio.h>
int main()
{
  int i, n;
  float arr[100];

  for (i = 0; i < 5; ++i)
  {
    scanf("%f", &arr[i]);
  }

  for (i = 1; i < 5; ++i)
  {
    if (arr[0] < arr[i])
      arr[0] = arr[i];
  }

  printf("%.2f", arr[0]);

  return 0;
} */