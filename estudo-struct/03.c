#include <stdio.h>

int main() {
struct X {
  char nome[3],end[3],tel[3];
  float salario;
  int idade;
};
  struct X fichar[3];
  for(size_t i =0; i <3;i++) {
    scanf("%s",&fichar[i].nome[i]);
  }
  for(size_t i =0; i <3;i++) {
    printf("%s",&fichar[i].nome[i]);
  }
  return 0;
}
