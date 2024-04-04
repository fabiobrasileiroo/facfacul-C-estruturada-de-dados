#include <stdio.h>
// Desenvolva um programa que leia um vetor Vet de 10 posições e divida-o em dois de 5 posições. Ao final escreva todos os vetores.
#define TAMANHO 10

int main() {
  int vet[TAMANHO];
  int vet1[TAMANHO/2];
  int vet2[TAMANHO/2];
  for(size_t i =0; i < TAMANHO; i++) {
    scanf("%d",&vet[i]);
    if(i < TAMANHO/2) {
      vet1[i] = vet[i];
    } else {
      vet2[i-TAMANHO/2] = vet[i];
    }
  }
  printf("vet:\n");
  for(size_t i = 0; i < TAMANHO;i++ ){
    printf("%d ",vet[i]);
  }
  printf("\n");
  printf("Vetor vet1:\n");
  for(size_t i = 0; i< TAMANHO/2;i++) {
    printf("%d ", vet1[i]);
  }
  printf("\n");
  printf("Vetor vet2:\n");
  for(size_t i = 0; i< TAMANHO/2;i++) {
    printf("%d ", vet2[i]);
  }
  return 0;
}