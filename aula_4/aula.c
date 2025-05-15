#include <stdio.h>

int main(){

    //estrutura do loop for 
    /*for (int contador  = 0; contador < 100; contador++) {
        printf("Contando: %d\n", contador);
    }*/

    int qtdNumeros, qtdPares = 0, qtdImpares = 0, soma = 0;

    printf("Quantos números você quer digitar? ");
    scanf("%d", &qtdNumeros);

    for (int contador = 0; contador < qtdNumeros ; contador++){
        int numero;

        printf("Digite o número: ");
        scanf("%d ", &numero);

        soma = soma + numero;

        if (numero%2==0) {
            qtdPares++;
        }
        else{
            qtdImpares++;
        }

    }

    printf("Pares: %d\n", qtdPares);
    printf("Impares: %d\n", qtdImpares);
    printf("Soma: %d\n", soma);

    return 0;
}