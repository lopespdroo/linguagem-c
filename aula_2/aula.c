#include <stdio.h>

int main(){

    int idade;
    float altura;
    char genero;
    char nome[15];

    printf("Digite sua idade: "); //idade
    scanf("%d", &idade);
    printf("Digite sua altura: "); //altura
    scanf("%f", &altura);
    printf("Digite seu genero: "); //gênero
    scanf(" %c", &genero);
    printf("Digite seu nome: "); //nome
    scanf("%s", nome);

    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);
    printf("Genero: %c\n", genero);
    printf("Nome: %s\n", nome);
    printf("O %s tem %d anos, com %.2f de altura, e e do genero %c de Masculino.", nome, idade, altura, genero);

    return 0;
}

//scanf é o comando utilizado para leitura
//printf é o comando utilizado para impressão do código na tela