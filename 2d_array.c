#include <stdio.h>

int main()
{
  int arr[3][3];
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      scanf("%d",&arr[i][j]);
    }
  }
  printf("%p\n",arr); // points to the first row of the array
  printf("%p\n",&arr); // points to the whole array
  // same address
  printf("%p\n",*arr);
  printf("%d\n", **arr);

  printf("%p\n",*arr);
  for (int i = 0; i < 3; i++)
  {
    printf("%p\n",*arr + i);
  }
}