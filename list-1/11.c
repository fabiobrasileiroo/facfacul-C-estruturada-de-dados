#include <stdio.h>

int main() {
  float num;
  float numMetade[10];
  for(int i =0; i < 10;i++) {
    scanf("%f",&num);
    numMetade[i] = num /2;
  }
  for(int i =0; i < 10;i++) {
    printf("%.2f ",numMetade[i]);
  }
  printf("\n");
  return 0;
}