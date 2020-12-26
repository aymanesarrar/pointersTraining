#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
  char source[101];
  scanf("%[^\n]", source);
  fgetc(stdin);
  char target[101];
  scanf("%[^\n]", target);
  int i;
  i = 0;
  while (source[i])
  {
    target[i] = source[i];
    printf("%s", target);
    i++;
    printf("\n");
  }
  return 0;
}