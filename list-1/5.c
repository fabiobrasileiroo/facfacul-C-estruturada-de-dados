// #include <stdio.h>LA

// int main() {
//   int vetor[100];
//   for(int i= 100;i>=0;i--) {
//     vetor[i] = i + 100;
//   }
//   for(int i = 100; i >=0;i--) {
//     printf("%d ",vetor[i]);
//   }
//   return 0;
// }
#include <stdio.h>

// Definindo o tamanho da matriz e do vetor
#define M_SIZE 6
#define V_SIZE 36

int main() {
  int m[M_SIZE][M_SIZE], a, v[V_SIZE];
  int i, j, k = 0;

  // Lendo a matriz M
  for (i = 0; i < M_SIZE; i++) {
    for (j = 0; j < M_SIZE; j++) {
      scanf("%d", &m[i][j]);
    }
  }

  // Lendo o valor A
  scanf("%d", &a);

  // Multiplicando a matriz M pelo valor A e armazenando no vetor V
  for (i = 0; i < M_SIZE; i++) {
    for (j = 0; j < M_SIZE; j++) {
      v[k++] = m[i][j] * a;
    }
  }

  // Imprimindo o vetor V
  for (i = 0; i < V_SIZE; i++) {
    printf("%d ", v[i]);
  }

  printf("\n");

  return 0;
}
