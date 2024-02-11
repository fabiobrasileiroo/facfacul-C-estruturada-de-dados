#include <stdio.h>

main() {
  int vetor[100];
  for(int i = 0; i <= 100;i++) {
    vetor[i]= i + 100;
  }
  for(int i = 0; i <= 100; i++) {
    printf("%d ",vetor[i]);
  }
  printf("\n");
}
