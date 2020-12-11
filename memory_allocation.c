#include <stdio.h>
#include <stdlib.h>

int main(){
  int n, i, *mem, sum = 0;

  printf("How long should the array be?\n");
  scanf("%d", &n);

  mem = /*(int*)*/ malloc(n * sizeof(int));
  if(mem == NULL){
    printf("Insufficient memory allocated\n");
    return 0;
  }


  for(i = 0; i < n; i++){
    printf("Enter a value for element %d\n", i+1);
    scanf("%d", (mem+i));
    sum += *(mem+i);
  }

  printf("The average of the values in your array is %d\n", sum/n);


  // for(i = 0; i < n; i++){
  //   if(i == n-1){
  //     printf("%d\n", array[i]);
  //   } else {
  //     printf("%d ", array[i]);  
  //   }
  // }

  free(mem);

  return 0;
}