#include <stdio.h>

int main(){

    char nome[15];
    int idade;
    float altura;
    char genero;

    printf("Qual o seu nome? ");
    scanf("%s", nome);

    printf("Qual a sua idade? ");
    scanf("%d", &idade);

    printf("E quanto de altura você tem? ");
    scanf("%f", &altura);

    printf("E por fim, qual o seu gênero? ");
    scanf(" %c", &genero);

    printf("Bem vindo(a), %s\n", nome);
    printf("SEU PERFIL\n");
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);
    printf("Genero: %c\n", genero);

    return 0;

}

