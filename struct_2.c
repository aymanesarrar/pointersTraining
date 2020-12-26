#include <stdio.h>
#include <stdlib.h>
struct employee
{
  char name[8];
  int age;
  float weight;
};
struct employee* getDetails();
int main()
{
  struct employee *e = getDetails();
  printf("name\t\t%s\n",e->name);
  printf("age\t\t%d\n", e->age);
  printf("weight\t\t%f\n", e->weight);
  free(e);
  return 0;
}
struct employee* getDetails()
{
  struct employee *ptr = malloc(sizeof(struct employee));
  printf("Enter employee's Details\n");
  scanf("%s%d%f",ptr->name,&ptr->age,&ptr->weight);
  return ptr;
}