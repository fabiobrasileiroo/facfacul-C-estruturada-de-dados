#include <stdio.h>

int main() {
  int vetor[20];
  for(int i = 1; i <= 20;i++) {
    if(i%2 != 0) {
      vetor[i] = i*i;
    }
  }
  for(int i = 1; i <= 20;i++) {
    if(i%2 != 0) {
      printf("%d^2 = %d\n",i,vetor[i]);
    }
  }
  return 0;
}