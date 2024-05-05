#include <stdio.h>
int main() {
  struct DadosAlunos {
    int n1;
    int n2;
    float media;
    int idade;
  };
  struct DadosAlunos aluno; 
  scanf("%d",&aluno.n1);
  scanf("%d",&aluno.n2);
  scanf("%d",&aluno.idade);
  aluno.media = (float)(aluno.n1+aluno.n2)/2;
  printf("Sua media: %2.f \n",aluno.media);
  printf("Sua idade é: %d\n",aluno.idade);

    
  return 0;
}
