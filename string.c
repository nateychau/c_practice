#include <string.h>
#include <stdio.h>

int main(){
  char yourName[] = "Google McGoogle", temp;
  int i; 

  printf("Your name is %s\n", yourName);
  printf("Your name is %lu characters long", strlen(yourName));
  for (i = 0; i < strlen(yourName)/2; i++){
    temp = yourName[i];
    yourName[i] = yourName[strlen(yourName) - 1 - i];
    yourName[strlen(yourName) - 1 - i] = temp;
  }
  printf("Your name backwards is %s\n", yourName);


  return 0;
}