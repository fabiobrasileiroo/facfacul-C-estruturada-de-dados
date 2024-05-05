#include <stdio.h>

struct Funcionarios {
    char nome[50];
    int idade;
    char sexo; 
    char cpf[12]; 
    char data_de_nascimento[20];
    int cod_setor_trabalho;
    char cargo[30];
    float salario;
};

#define TAMANHO_FUNCIONARIOS 3

int main() {
    struct Funcionarios funcionarios[TAMANHO_FUNCIONARIOS];
    
    for(int i = 0; i < TAMANHO_FUNCIONARIOS; i++) {
        printf("Digite seu nome: ");
        scanf("%s", funcionarios[i].nome);

        printf("Digite sua idade: ");
        scanf("%d", &funcionarios[i].idade);

        printf("Digite seu sexo (M/F): ");
        scanf(" %c", &funcionarios[i].sexo); 

        printf("Digite seu CPF: ");
        scanf("%s", funcionarios[i].cpf);

        printf("Digite sua data de nascimento: ");
        scanf("%s", funcionarios[i].data_de_nascimento);

        printf("Digite seu codigo de setor: ");
        scanf("%d", &funcionarios[i].cod_setor_trabalho);

        printf("Digite seu cargo: ");
        scanf("%s", funcionarios[i].cargo);

        printf("Digite seu salario: ");
        scanf("%f", &funcionarios[i].salario);
    }


    printf("\nDados dos funcionarios:\n");
    for(int i = 0; i < TAMANHO_FUNCIONARIOS; i++) {
        printf("Nome: %s\n", funcionarios[i].nome);
        printf("Idade: %d\n", funcionarios[i].idade);
        printf("Sexo: %c\n", funcionarios[i].sexo);
        printf("CPF: %s\n", funcionarios[i].cpf);
        printf("Data de nascimento: %s\n", funcionarios[i].data_de_nascimento);
        printf("Codigo de setor: %d\n", funcionarios[i].cod_setor_trabalho);
        printf("Cargo: %s\n", funcionarios[i].cargo);
        printf("Salario: %.2f\n", funcionarios[i].salario);
        printf("\n");
    }

    return 0;
}
