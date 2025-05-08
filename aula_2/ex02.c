#include <stdio.h>

int main(){

    char nome[15];
    float nota1;
    float nota2;
    
    printf("Qual o seu nome? ");
    scanf("%s", nome); //solicita o NOME do aluno
    printf("Olá %s, qual foi a sua primeira nota? ", nome);
    scanf("%f", &nota1); //solicita a PRIMEIRA nota
    printf("E a sua segunda nota, %s? ", nome);
    scanf("%f", &nota2); //solicita a SEGUNDA nota

    float media = (nota1 + nota2)/2; //calcula a média

    printf("O aluno %s obteve média final %.2f.",nome,media); //print do nome e média do aluno

    return 0;
}