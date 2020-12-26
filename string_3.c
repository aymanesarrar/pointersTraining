#include <stdio.h>

int main()
{
  char word[6] = "hello";

  int i;
  i = 0;
  while(word[i])
  {
    printf("%s\n",word + i);
    i++;
  }
}