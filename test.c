#include <stddef.h>
#include <stdio.h>
char toUpper(char c)
{
  return (c >= 'a' && c <= 'z') ? c = c - 32 : c;
}
char toLower(char c)
{
  return (c >= 'A' && c <= 'Z') ?  c = c + 32 : c;
}
size_t duplicate_count(const char *text)
{
  int count, i, j, isFound;
  i = 0;
  j = 0;
  count = 0;
  while (text[i])
  {
    j = i + 1;
    while (text[j])
    {
      if ((toUpper(text[i]) == text[j] || toLower(text[i]) == text[j]))
      {
        count++;
        break;
      }
      j++;
    }
    i++;
  }
  return count;
}
int main()
{
  int result;
  result = duplicate_count("indivisibility");
  printf("%d", result);
}