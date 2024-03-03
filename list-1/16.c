#include <stdio.h>

#define TAMANHO_TURMA 5

typedef struct
{
  float altura;
  int sexo;
} Aluno;

int main()
{
  // const int TAMANHO_TURMA = 50;
  Aluno turma[TAMANHO_TURMA];
  float soma_alturas = 0;
  float media_altura_turma;
  float maior_altura = 0, menor_altura = 9999;
  int cont_mulheres_acima_media = 0;
  int cont_abaixo_media_turma = 0;

  // Lendo os  dados dos alunos
  for (int i = 0; i < TAMANHO_TURMA; i++)
  {
    printf("Informe a altura do aluno %d (em metros):", i + 1);
    scanf("%f", &turma[i].altura);
    printf("Informe o sexo do aluno %d (1 para masculino, 2 para feminino)", i + 1);
    scanf("%d", &turma[i].sexo);

    soma_alturas += turma[i].altura;

    if (turma[i].altura > maior_altura)
    {
      maior_altura = turma[i].altura;
    }
    if (turma[i].altura < menor_altura)
    {
      menor_altura = turma[i].altura;
    }
  }
  // Calculando a média da altura da turma
  media_altura_turma = soma_alturas / TAMANHO_TURMA;
  // Verificando as mulheres com altura acima da média
  printf("\nMulheres com altura acima da media da altura das mulheres:\n");
  for (int i = 0; i < TAMANHO_TURMA; i++)
  {
    if (turma[i].sexo == 2 && turma[i].altura > media_altura_turma)
    {
      printf("Altura: %.2fm\n", turma[i].altura);
      cont_mulheres_acima_media++;
    }
  }

  printf("\nPessoas com alturas abaixo da media da turma:\n");
  for (int i = 0; i < TAMANHO_TURMA; i++)
  {
    if (turma[i].altura < media_altura_turma)
    {
      printf("Altura: %.2fm\n", turma[i].altura);
      cont_abaixo_media_turma++;
    }
  }

  if (cont_abaixo_media_turma == 0)
  {
    printf("Ninguem na turma possui altura abaixo da media.\n");
  }
  printf("\nMaior altura da turma: %.2fm\n", maior_altura);
  printf("Menor altura da turma: %.2fm\n", menor_altura);

  return 0;
}
