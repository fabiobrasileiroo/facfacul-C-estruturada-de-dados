#include <stdio.h>

int main() {
  int vetor[100];
  for(int i = 1; i <= 500;i++) {
    vetor[i]=i;
    if(vetor[i] % 5 == 0) {
      printf("%d ",vetor[i]);
    }
  }
  printf("\n");
  // printf("%d",vetor[0]);
    // printf("%d ",vetor[505]);
  return 0;
}