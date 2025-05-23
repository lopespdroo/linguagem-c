#include <stdio.h>

int multiplicar(int numero1, int numero2){
    if (numero1 == 0 || numero2 == 0){
        return 0;
    } else if (numero2 > 0){
        return numero1 + multiplicar(numero1, numero2 - 1);
    }
}

int main(){

    int numero1, numero2;

    printf("Informe o primeiro número: ");
    scanf("%d", &numero1);
    printf("Informe o segundo número: ");
    scanf("%d", &numero2);

    int resultado = multiplicar(numero1, numero2);

    printf("O produto é : %d", resultado);

    return 0;
}