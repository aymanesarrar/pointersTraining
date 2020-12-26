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
int execute(int x, int y, FP fp)
{
  int result = (*fp)(x,y);
  return result;
}
int main()
{
  printf("a + b = %d\n",execute(5,6,sum));
  printf("a mod b = %d\n",execute(5,6,mod));
}