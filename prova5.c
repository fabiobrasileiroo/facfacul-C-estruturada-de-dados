#include <stdio.h>

int main() {
  int vetor[5]={3,1,6,2,4},i;
  for(i=0;i<=5;i++) {
    switch (i)
    {
    case 1:
      vetor[i] = vetor[i] - 1;
      break;
    case 2:
      vetor[i] = vetor[i] +1;
      break;
    case 3:
      vetor[i] = vetor[i - 2] + vetor[i - 1];
      break;
    default:
      vetor[i] = 0;
    }
  }
  for(i=0;i<5;i++) {
    printf("%d,",vetor[i]);
  }
    printf("\n");
  return 0;
}