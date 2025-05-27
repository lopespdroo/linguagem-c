#include <stdio.h>

int main(){

    int numeros[10];
    int soma = 0;

    // RESOLUÇÃO COM APENAS UM LOOP -----------------
    /*for (int i = 0; i < 10; i++){
        int numero;
        printf("Digite o valor: ");
        scanf("%d", &numero);
        numeros[i] = numero;

        soma = soma + numero;
    }

     printf("Resultado da soma: %d", soma);*/

    //------------------------------------------------

    // RESOLUÇÃO COM DOIS LOOPS -----------------

    for (int i = 0; i < 10; i++){
        int numero;
        printf("Digite o valor: ");
        scanf("%d", &numero);
        numeros[i] = numero;
    }

    for (int i = 0; i < 10; i++){
        soma = soma + numeros[i];
    }

    printf("Resultado da soma: %d", soma);

    return 0;
}