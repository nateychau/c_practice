#include <stdio.h>
#include <string.h>

struct person{
  char name[50];
  int age;
  char location[50];
};

int main(){
  struct person nate;
  
  printf("What is your name?\n");
  scanf("%s", &nate.name);
  printf("How old are you?\n");
  scanf("%d", &nate.age);
  printf("Where do you live?\n");
  scanf("%s", &nate.location);

  printf("Your name is %s\n You are %d years old\n You live in %s\n",
  nate.name, nate.age, nate.location);

  return 0;
}