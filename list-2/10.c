#include <stdio.h>

int main() {
  // 10. Fazer um algoritmo que leia os valores de duas matrizes 3×3 e imprima a multiplicação das duas matrizes.
  int matriz1[3][3];//9 elementos
  int matriz2[3][3];
  int mult[3][3];
  for(int l = 0; l < 3;l++) {
    for(int c = 0; c < 3;c++) {
      scanf("%d",&matriz1);
      scanf("%d",&matriz2);
    }
  }
  for(int l = 0; l < 3;l++) {
    for(int c = 0; c < 3;c++) {
      mult[l][c] = matriz1[l][c] + matriz2[l][c];
    }
  }
  // Multiplicação das matrizes
  // for(int l = 0; l < 3; l++) {
  //   for(int c = 0; c < 3; c++) {
  //     for(int k = 0; k < 3; k++) {
  //       mult[l][c] += matriz1[l][k] * matriz2[k][c];
  //     }
  //   }
  // }

  for(int l = 0; l < 3;l++) {
    for(int c = 0; c < 3;c++) {
      printf("%d ", mult[l][c]);
    }
    printf("\n");
  }
  return 0;
}
// #include <stdio.h>

// #define ROWS 3
// #define COLS 3

// void multiplyMatrices(int mat1[ROWS][COLS], int mat2[ROWS][COLS], int result[ROWS][COLS]) {
//     int i, j, k;
//     for (i = 0; i < ROWS; i++) {
//         for (j = 0; j < COLS; j++) {
//             result[i][j] = 0;
//             for (k = 0; k < COLS; k++) {
//                 result[i][j] += mat1[i][k] * mat2[k][j];
//             }
//         }
//     }
// }

// void printMatrix(int mat[ROWS][COLS]) {
//     int i, j;
//     for (i = 0; i < ROWS; i++) {
//         for (j = 0; j < COLS; j++) {
//             printf("%d ", mat[i][j]);
//         }
//         printf("\n");
//     }
// }

// int main() {
//     int matrix1[ROWS][COLS], matrix2[ROWS][COLS], result[ROWS][COLS];
//     int i, j;

//     printf("Digite os valores da primeira matriz (3x3):\n");
//     for (i = 0; i < ROWS; i++) {
//         for (j = 0; j < COLS; j++) {
//             scanf("%d", &matrix1[i][j]);
//         }
//     }

//     printf("Digite os valores da segunda matriz (3x3):\n");
//     for (i = 0; i < ROWS; i++) {
//         for (j = 0; j < COLS; j++) {
//             scanf("%d", &matrix2[i][j]);
//         }
//     }

//     multiplyMatrices(matrix1, matrix2, result);

//     printf("O resultado da multiplicação das matrizes é:\n");
//     printMatrix(result);

//     return 0;
// }
