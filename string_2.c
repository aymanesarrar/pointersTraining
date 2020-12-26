#include <stdio.h>

int main()
{
  char str[6] = "hello";
  char *ptr;
  ptr = str;

  int i;
  i = 0;
  while (str[i])
  {
    printf("%c\n",*(ptr + i));
    i++;
  }
}