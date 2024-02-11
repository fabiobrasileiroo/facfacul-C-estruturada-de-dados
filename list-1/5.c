#include <stdio.h>

int main() {
  int vetor[100];
  for(int i= 100;i>=0;i--) {
    vetor[i] = i + 100;
  }
  for(int i = 100; i >=0;i--) {
    printf("%d ",vetor[i]);
  }
  return 0;
}