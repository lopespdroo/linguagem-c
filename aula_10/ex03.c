#include <stdio.h>

typedef struct Pessoa {
    char nome[50];
    int idade;
} Pessoa;

void exibirPessoa(struct Pessoa pessoa){
    printf("\nBem vindo(a), %s", pessoa.nome);
    printf("Seus dados:\nNome: %sIdade: %d", pessoa.nome, pessoa.idade);
}

int main(){

    Pessoa pessoa;

    printf("Qual o seu nome?\n");
    fgets(pessoa.nome, 50, stdin);

    printf("Qual a sua idade?\n");
    scanf("%d", &pessoa.idade);

    exibirPessoa(pessoa);

    return 0;
}