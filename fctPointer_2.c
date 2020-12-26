#include <stdio.h>
typedef int (*FP) (int,int);
int sum(int a, int b)
{
  return a + b;
}
int mod(int a, int b)
{
  return a % b;
}
FP get(char c)
{
  if (c == '+')
    return sum;
  else
    return mod;
}
int main()
{
  FP fp;
  fp = get('+');
  printf("a + b = %d\n",(*fp)(10,5));
  fp = get('%');
  printf("a mod b = %d\n", (*fp)(10, 5));
}