#include <stdio.h>

int main()
{
  float numQuadrado[10];
  float num;
  float numGuardado[10];
  for (int i = 0; i < 10; i++) {
    scanf("%f", &num);
    numGuardado[i] = num;
    numQuadrado[i] = num * num;
  }
  for (int i = 0; i < 10; i++) {
    printf("%.2f^2 = %.2f, ", numGuardado[i],numQuadrado[i]);
  }
  printf("\n");
  return 0;
}
