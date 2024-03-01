#include <stdio.h>

int main() {
  float vetorNum[10];
  float num;
  float numGuardado[10];
  for(int i = 0; i< 10;i++) {
    scanf("%f",&num);
    numGuardado[i]=num;
    vetorNum[i]= num*num*num;
  }
  for(int i=0; i< 10;i++) {
    printf("%.2f^3 = %.2f\n",numGuardado[i],vetorNum[i]);
  }
  return 0;
}