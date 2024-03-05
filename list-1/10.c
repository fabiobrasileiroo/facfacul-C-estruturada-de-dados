// #include <stdio.h>

// int main() {
//   int vetor[100],cont=0;
//   for(int i =1;i<= 100; i++) {
//     if(i%2 !=0) {
//       vetor[cont] =i;
//       cont++;
//       // printf("%d ",vetor[i]);
//     }
//   }
//   for(int  i = 0; i<= cont; i++) {
//     // if(i%2 !=0) {
//       printf("%d ",vetor[cont]);
//     // }
//   }
//   return 0;
// }
// #include <stdio.h>
// #include <math.h>
// int main() {
//   int n[10],i;
//   for(i=0;i<10;i++) {
//     n[i]=2*i+1;
//     n[i]=n[i]*n[i];
//     printf("%d\n",n[i]);
//   }
// }

#include <stdio.h>

int main() {
  int vetor[100],cont=0;
  for(int i =1;i<= 100; i++) {
    if(i%2 !=0) {
      vetor[cont] =i;
      cont++;
      // printf("%d ",vetor[i]);
    }
  }
  for(int  i = 0; i<= cont; i++) {
    // if(i%2 !=0) {
      printf("%d ",vetor[cont]);
    // }
  }
  return 0;
}