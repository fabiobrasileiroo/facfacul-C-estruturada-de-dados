#include <stdio.h>

int main() {
  int vetor[100];
  for(int i =1;i<= 100; i++) {
    if(i%2 !=0) {
      vetor[i] =i;
      printf("%d ",vetor[i]);
    }
  }
  for(int  i = 1; i<= 100; i++) {
    if(i%2 !=0) {
      printf("%d ",vetor[i]);
    }
  }
  return 0;
}