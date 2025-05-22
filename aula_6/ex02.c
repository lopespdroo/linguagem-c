#include <stdio.h>

void decrescente(int numero){
    if (numero > 0){
        printf("%d ", numero);
        decrescente(numero - 1);
    }
}

int main(){

    int numero;

    printf("Informe o valor de N: ");
    scanf("%d", &numero);

    decrescente(numero);

    return 0;
}