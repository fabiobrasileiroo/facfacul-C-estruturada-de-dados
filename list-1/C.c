#include <stdio.h>

main() {
  
  int vetor[100];
  for(int i = 100; i> 0;i--) {
    vetor[i] = i ;
  }
  for(int i = 100; i> 0;i--) {
    printf("%d ",vetor[i]);
  }
  // vetor[202]= 101;

  // printf("%d",vetor[202]);
  
}