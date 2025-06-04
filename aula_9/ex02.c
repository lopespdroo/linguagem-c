#include <stdio.h>
#include <string.h>

int main(){

    char palavra1[50], palavra2[50];

    printf("Digite a primeira palavra: ");
    fgets(palavra1, 50, stdin);

    printf("Digite a segunda palavra: ");
    fgets(palavra2, 50, stdin);

    int resultado = strcmp(palavra1, palavra2);

    resultado == 0 ? printf("As palavras são iguais") : printf("As palavras são diferentes");

    return 0;
}