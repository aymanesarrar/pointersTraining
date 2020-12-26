#include <stdio.h>
char *month(int nb);
int main()
{
  char c1,c2;
  scanf("%c %c",&c1,&c2);

  char hex[] = "0123456789ABCDEF";
  printf("%s",month(6));
}
char *month(int nb)
{
  if (nb == 1)
    return "january";
  else if (nb == 2)
    return "february";
  else if (nb == 3)
    return "March";
  else if (nb == 4)
    return "April";
  else if (nb == 5)
    return "May";
  else if (nb == 6)
    return "June";
  else if (nb == 7)
    return "July";
  else if (nb == 8)
    return "August";
  else if (nb == 9)
    return "September";
  else if (nb == 10)
    return "October";
  else if (nb == 11)
    return "November";
  else if (nb == 12)
    return "December";
}