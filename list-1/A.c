#include <stdio.h>

int main() {
  int vetor[50];
  int i;

  // entrada
  for(i = 0; i < 50; i++) {
    scanf("%d",&vetor[i]);
  }
  // saida
  for(i = 0; i < 50;i++) {
    // if(i < 49) {
    printf("%d, ",vetor[i]);
    // } else {
    // printf("%d ",vetor[i]);
    // }
  }
  return 0;
}