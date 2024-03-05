// #include <stdio.h>

// main() {
// int vetor[100];
// for(int i = 1; i<=100; i+=2) {
//   vetor[i] = i;
// }
// for(int i = 1; i<= 100; i+=2) {
//   printf("%d ",vetor[i]);
// }
// printf("\n\n");
// for(int i = 1; i<= 100; i+=1) {
//   printf("%d ",vetor[i]);
// }
// }

// #include <stdio.h>
// int main() {
//   int vetor[100];
//   for(int i = 1; i <= 100;i++) {
//     if(vetor[i] % 2 != 1){
//       vetor[i]=i;
//      } 
//   }
//   for(int i = 1; i <= 100;i++) {
//       printf("%d ",vetor[i]);
//   }
//   printf("\n");
//   for(int i = 1; i <= 100;i++) {
//     if(vetor[i] % 2 != 1){
//       printf("%d ",vetor[i]);
//     }
//   }
//   return 0;
// }

// errado
#include <stdio.h>
int main() {
  int n[100],i;
  printf("i");
  for(i=3;i<=100;i= i +2) {
    n[i]=i;
    printf("\n%i",n[i]);
  }
  return 0;
}