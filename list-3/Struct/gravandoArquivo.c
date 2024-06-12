#include <stdlib.h>
#include <stdio.h>

int main(){
  FILE *ponteiro_arquivo;
  char palavra[20];
  ponteiro_arquivo = fopen("arquivo_palavras.txt", "w");
  if (ponteiro_arquivo == NULL){
    printf("Erro na leitura");
    return 1;
  } else{
    printf("Escreva uma palavra para testar a gravacao: ");
    scanf("%s", palavra);
    fprintf(ponteiro_arquivo, "%s", palavra);
    fclose(ponteiro_arquivo);
    printf("Dados gravados!\n");
  }
  system("pause");
  return 0;
}