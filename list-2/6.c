#include <stdio.h>
// Faça um programa que leia uma matriz 10x10 
// de inteiros. A seguir transforme-a em um vetor.
#define TAMANHO 10 
int main() {
  int matriz[TAMANHO][TAMANHO];
  int vetor[TAMANHO*TAMANHO] = {0};
  int index = 0;
  for(size_t l = 0; l < TAMANHO;l++) {
    for(size_t c = 0; c < TAMANHO; c++) {
      scanf("%d",&matriz[l][c]);
      vetor[index] = matriz[l][c];
      index++;
    }
  }
  for(index = 0; index < TAMANHO*TAMANHO;index++) {
    printf("%d - %d ",index +1,vetor[index]);
    if (index != TAMANHO * TAMANHO - 1) { // Evita imprimir a vírgula e o espaço após o último valor
        printf(", ");
    }
  }
    printf("\n");
  return 0;
}