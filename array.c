#include <stdio.h>

void printArray(int array[], int n){
  int i;
  for(i = 0; i < n; i++){
    printf("Index %d: %d\n", i, array[i]);
  }
}

int main(){

  //declares an array of int of length 5
  int intArray[5], i; 

  //initializes an array of int of length 5 with 1-5 prefilled
  int initializedArray[5] = {1,2,3,4,5};

  printf("Original array is:\n");
  for(i = 0; i < sizeof(initializedArray)/sizeof(initializedArray[0]); i++){
    printf("Index %d: %d\n", i, initializedArray[i]);
  }

  initializedArray[0] = 5; 
  initializedArray[4] = 0;

  printf("Array after swapping first and last element is:\n");
  printArray(initializedArray, sizeof(initializedArray)/sizeof(initializedArray[0]));

  return 0;
}