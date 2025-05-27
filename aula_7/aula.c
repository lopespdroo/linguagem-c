#include <stdio.h>

int main(){

    int numeros[5];

    for (int i = 0; i < 5; i++){
        int numero;

        printf("Informe o primeiro valor a ser armazenado: ");
        scanf("%d", &numero);
        numeros[i] = numero;
    }

    for (int i = 0; i < 5; i++){
        printf("[%d] = %d\n", i, numeros[i]);
    }


    return 0;
}