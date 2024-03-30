#include <stdio.h>
int main() {
  int valor[5];
  for(int i = 0; i < 5;i++) {
    scanf("%d",&valor[i]);
  }
  for(int i = 1; i < 6;i++) {
    printf("%d ",valor[i]);
  }

  return 0;
}