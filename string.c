#include <stdio.h>

int main()
{
  char str[6] = "hello";
  int i;
  i = 0;
  // printing the addresses
  while (str[i])
  {
    printf("%p\n",str + i);
    i++;
  }
  // printing each character , using dereferencing
  i = 0;
  while (str[i])
  {
    if (i != 4)
      printf("%c",*(str + i));
    else
      printf("%c",*(str + i));
    i++;
  }
}