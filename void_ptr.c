#include <stdio.h>

int main()
{
/*int i = 10;
  char c = 'a';
  void *ptr;

  ptr = &i;
  printf("value of i : %d\n",*ptr);
  ptr = &c;
  printf("value of c : %c\n",*ptr);            */
  // it gives an error because we can't dereference a void pointer
  //SOLUTION !!!!!
  int i = 10;
  char c = 'a';
  void *ptr;
  ptr = &i;
  printf("value of i = %d\n", (*(int*)ptr));
  ptr = &c;
  printf("value of c = %c\n", (*(char *)ptr));
  return 0;
}