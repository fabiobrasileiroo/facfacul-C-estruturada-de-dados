#include <stdio.h>

#define TAMANHO 3 

struct Alunos {
  int matricula;
  char nome[50]; // Para armazenar um nome completo, um array de caracteres é usado
  int cod_de_disciplina;
  float n1;
  float n2;
};

int main() {
  struct Alunos alunos[TAMANHO];

  for(int i = 0; i < TAMANHO; i++) {
    printf("Digite sua matricula: ");
    scanf("%d", &alunos[i].matricula);
    // o & é opcional pois to passando um ponteiro de array 
    printf("Digite seu nome: ");
    scanf("%s", alunos[i].nome);

    printf("Digite seu codigo de Disciplina: ");
    scanf("%d", &alunos[i].cod_de_disciplina);

    printf("Digite sua primeira nota: ");
    scanf("%f", &alunos[i].n1);

    printf("Digite sua segunda nota: ");
    scanf("%f", &alunos[i].n2);
  }

  for(int i = 0; i < TAMANHO; i++) {
    alunos[i].n2 = alunos[i].n2 * 2;
    
    printf("Matricula do aluno %d: %d\n", i, alunos[i].matricula);
    printf("Nome do aluno %d: %s\n", i, alunos[i].nome);
    printf("Disciplina do aluno %d: %d\n", i, alunos[i].cod_de_disciplina);
    printf("Primeira nota aluno %d: %.2f\n", i, alunos[i].n1);
    printf("Segunda nota do aluno %d: %.2f\n", i, alunos[i].n2);
  }

  return 0;
}
