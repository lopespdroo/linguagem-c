#include <stdio.h>

int main(){

    float primeiroAng;
    float segundoAng;

    printf("Digite o primeiro ângulo: ");
    scanf("%f", &primeiroAng);

    printf("Digite o segundo ângulo: ");
    scanf("%f", &segundoAng);

    float terceiroAng = (180-(primeiroAng+segundoAng));

    printf("O terceiro ângulo do triângulo é: %.2f", terceiroAng);

}

