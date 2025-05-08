#include <stdio.h>

//IMC = (peso/altura^2)

int main(){

    char nome[15];
    float peso;
    float altura;

    printf("Qual o seu nome? ");
    scanf("%s", nome);

    printf("Olá, %s, qual é o seu peso? ", nome);
    scanf("%f", &peso);

    printf("Certo! E qual é a sua altura? ");
    scanf("%f", &altura);

    float imc = (peso/(altura*altura));

    printf("%s, seu Índice de Massa Corporal é %.2f.", nome,imc);

    return 0;
}