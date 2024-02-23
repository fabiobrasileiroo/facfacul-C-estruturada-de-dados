#include <stdio.h>

main() {
int vetor[100];
for(int i = 1; i<=100; i+=2) {
  vetor[i] = i;
}
for(int i = 1; i<= 100; i+=2) {
  printf("%d ",vetor[i]);
}
}