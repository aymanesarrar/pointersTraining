#include <stdio.h>

int main()
{
  // int arr[5] = {10,20,30,40,50};
  // int *P;
  // P = arr;

  // if (P != NULL)
  //   printf("arr[1] = %d",*(P+1));
  // return 0;
  int arr[5] = {10, 20, 30, 40, 50};
  int *P;
  int *Q;
  P = arr;
  Q = arr+2;
  if (Q > P)
    printf("Q is ahead of P\n");
}