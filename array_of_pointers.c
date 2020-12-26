#include <stdio.h>

int main()
{
  int *arr[5];
  int a = 10;
  int b = 20;
  int c = 30;
  int d = 40;
  int e = 50;
  arr[0] = &a;
  arr[1] = &b;
  arr[2] = &c;
  arr[3] = &d;
  arr[4] = &c;
  for (int i = 0; i < 5; i++)
  {
    printf("*arr[%d] = %d\n",i,**(arr + i));
  }


}