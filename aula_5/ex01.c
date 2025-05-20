#include <stdio.h>

float areaRetangulo(float base, float altura){
    return base * altura;
}

int main(){

    float base, altura;

    printf("Digite a base do retângulo: ");
    scanf("%f", &base);
    printf("Digite a altura do retângulo: ");
    scanf("%f", &altura);

    float area = areaRetangulo(base, altura);
    printf("Área do retângulo: %.1f", area);


    return 0;
}