// #include <stdio.h>

// int main() {
//     int mat1[3][3], mat2[3][3], result[3][3];
//     int i, j, k;

//     printf("Digite os valores da primeira matriz (3x3):\n");
//     for (i = 0; i < 3; i++) {
//         for (j = 0; j < 3; j++) {
//             scanf("%d", &mat1[i][j]);
//         }
//     }

//     printf("Digite os valores da segunda matriz (3x3):\n");
//     for (i = 0; i < 3; i++) {
//         for (j = 0; j < 3; j++) {
//             scanf("%d", &mat2[i][j]);
//         }
//     }

//     // Multiplicação das matrizes
//     for (i = 0; i < 3; i++) {
//         for (j = 0; j < 3; j++) {
//             result[i][j] = 0;
//             for (k = 0; k < 3; k++) {
//                 result[i][j] += mat1[i][k] * mat2[k][j];
//             }
//         }
//     }

//     printf("O resultado da multiplicação das matrizes é:\n");
//     for (i = 0; i < 3; i++) {
//         for (j = 0; j < 3; j++) {
//             printf("%d ", result[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

/// funcionando

#include <stdio.h>

int main() {
  // 10. Fazer um algoritmo que leia os valores de duas matrizes 3×3 e imprima a multiplicação das duas matrizes.
  int matriz1[3][3];//9 elementos
  int matriz2[3][3];
  int mult[3][3];
  for(int l = 0; l < 3;l++) {
    for(int c = 0; c < 3;c++) {
      scanf("%d",&matriz1[l][c]); // Corrigido
    }
  }
  for(int l = 0; l < 3;l++) {
    for(int c = 0; c < 3;c++) {
      scanf("%d",&matriz2[l][c]); // Corrigido
    }
  }
  // Multiplicação das matrizes
  // for(int l = 0; l < 3; l++) {
  //   for(int c = 0; c < 3; c++) {
  //     mult[l][c] = 0; // Inicializa o valor da célula da matriz resultante
  //     for(int k = 0; k < 3; k++) {
  //       mult[l][c] += matriz1[l][k] * matriz2[k][c]; // Multiplicação correta de matrizes
  //     }
  //   }
  // }

  for(int l = 0; l < 3;l++) {
    for(int c = 0; c < 3;c++) {
      printf("%d ", matriz1[l][c]*matriz2[l][c]);
    }
    printf("\n");
  }
  return 0;
}
