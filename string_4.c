#include <stdio.h>

int main()
{
  char *words[5] = {"hello", "world", "wewe", "sahbe", "dwww"};

  for (int i = 0; i < 5; i++)
  {
    printf("words[%d] = %c\n",i,words[i]);
  }
}