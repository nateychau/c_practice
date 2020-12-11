#include <stdio.h>

int main(){
  int *pc, c;
  c = 5; 
  pc = &c; 
  printf("Value of c is %d\n", c);
  printf("pc points to c's address: %p\n", pc);
  printf("pc dereferenced is c's value: %d\n", *pc);
  c = 7; 
  printf("c's value is changed: %d\n", c);
  printf("pc still points to the same address: %p\n", pc);
  printf("pc dereferenced is c's new value: %d\n", *pc);

  return 0;
}