#include <stdio.h>
// 10. Fazer um algoritmo que leia os valores de duas matrizes
// 3×3 e imprima a multiplicação das duas matrizes.
#define TAMANHO  3

int main() {
  int array1[TAMANHO][TAMANHO];
  int array2[TAMANHO][TAMANHO];
  int array[TAMANHO][TAMANHO] = {0};

  // Leitura da matriz array1
  for (size_t l = 0; l < TAMANHO; l++) {
    for (size_t c = 0; c < TAMANHO; c++) {
      scanf("%d", &array1[l][c]);
    }
  }

  // Leitura da matriz array2
  for (size_t l = 0; l < TAMANHO; l++) {
    for (size_t c = 0; c < TAMANHO;  c++) {
      scanf("%d", &array2[l][c]);
    }
  }

  // Multiplicação das matrizes
  for (int l = 0; l < TAMANHO; l++) {
    for (int c = 0; c < TAMANHO; c++) {
      for (int z = 0; z < TAMANHO; z++) {
        array[l][c] += array1[l][z] * array2[z][c];
      }
    }
  }


  // Impressão da matriz resultante
  for (size_t l = 0; l < TAMANHO; l++) {
    for (size_t c = 0; c < TAMANHO; c++) {
      printf("%d ", array[l][c]);
    }
    printf("\n");
  }

  return 0;
}