#include <stdio.h>
#include <string.h>

#define TAMANHO_CADASTRO 3
#define MAX_STRING_SIZE 100

struct Enderecos {
    char rua[MAX_STRING_SIZE], bairro[MAX_STRING_SIZE], cidade[MAX_STRING_SIZE], estado[MAX_STRING_SIZE], cep[MAX_STRING_SIZE];
};

struct Cadastro {
    struct Enderecos endereco;
    char nome[MAX_STRING_SIZE], cpf[MAX_STRING_SIZE], estadoCivil[MAX_STRING_SIZE], sexo[2], telefone[MAX_STRING_SIZE];
    int identidade, idade;
    double salario;
};

int main() {
    struct Cadastro cadastro[TAMANHO_CADASTRO];
    int maiorIdade = 0;
    double maiorSalario = 0;

    // Preenchendo os cadastros
    for (size_t i = 0; i < TAMANHO_CADASTRO; i++) {
        printf("Cadastro %d\n", i+1);
        printf("Digite seu nome: ");
        fgets(cadastro[i].nome, MAX_STRING_SIZE, stdin);
        printf("Digite seu CPF: ");
        scanf("%s", cadastro[i].cpf);
        printf("Digite sua idade: ");
        scanf("%d", &cadastro[i].idade);
        printf("Digite seu sexo (M/F): ");
        scanf("%s", cadastro[i].sexo);
        printf("Digite seu salário: ");
        scanf("%lf", &cadastro[i].salario);
        getchar(); // Limpar o buffer do teclado
    }

    // Encontrar a pessoa com a maior idade
    for (size_t i = 0; i < TAMANHO_CADASTRO; i++) {
        if (cadastro[i].idade > maiorIdade) {
            maiorIdade = cadastro[i].idade;
        }
    }
    printf("A pessoa mais velha tem %d anos.\n", maiorIdade);

    // Encontrar pessoas do sexo masculino
    printf("Pessoas do sexo masculino:\n");
    for (size_t i = 0; i < TAMANHO_CADASTRO; i++) {
        if (strcmp(cadastro[i].sexo, "M") == 0) {
            printf("Nome: %s\n", cadastro[i].nome);
        }
    }

    // Encontrar pessoas com salário maior que 1000
    printf("Pessoas com salário maior que 1000:\n");
    for (size_t i = 0; i < TAMANHO_CADASTRO; i++) {
        if (cadastro[i].salario > 1000.0) {
            printf("Nome: %s\n", cadastro[i].nome);
        }
    }

    // Imprimir os dados da pessoa cuja identidade é igual a um valor fornecido pelo usuário
    int identidadeBusca;
    printf("Digite a identidade da pessoa que deseja buscar: ");
    scanf("%d", &identidadeBusca);
    for (size_t i = 0; i < TAMANHO_CADASTRO; i++) {
        if (cadastro[i].identidade == identidadeBusca) {
            printf("Dados da pessoa:\n");
            printf("Nome: %s\n", cadastro[i].nome);
            printf("CPF: %s\n", cadastro[i].cpf);
            printf("Idade: %d\n", cadastro[i].idade);
            printf("Sexo: %s\n", cadastro[i].sexo);
            printf("Salário: %.2lf\n", cadastro[i].salario);
            break;
        }
    }

    return 0;
}
