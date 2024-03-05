#include <stdio.h>
int main() {
  soma(3,3);
  printf("\n");
  menos(3,3);
  return 0;
}
// soma = nome da funcao 
// a,b sao seus parametros
int soma(a,b) {
  return printf("%d",a+b);
}
int menos(num1, num2) {
  return printf("%d",num1-num2);
}