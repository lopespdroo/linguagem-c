#include <stdio.h>

void boasvindas(char nome[], int idade){
    printf("Olá, %s, você tem %d anos. Seja bem-vindo(a)!", nome, idade);
}

int main(){

    char nome[15];
    int idade;

    printf("Nome: ");
    scanf("%s", &nome);
    printf("Idade: ");
    scanf("%d", &idade);

    boasvindas(nome, idade);

    return 0;
}