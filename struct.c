#include <stdio.h>
int main()
{
  struct employee
  {
    char name[4];
    int age;
    float weight;
  };
  struct employee e = {"abc", 20, 55.5};
  struct employee *ptr = &e;
  printf("name = %s\n", ptr->name);
  printf("name = %d\n", ptr->age);
  printf("name = %f\n", ptr->weight);
}