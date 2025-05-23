#include <stdio.h>

int somar(int numero){
    if (numero == 0){
        return 0;
    }
    return numero + somar(numero - 1);
}

int main(){

    int numero;

    printf("Informe o valor de N: ");
    scanf("%d", &numero);
    
    int resultado = somar(numero);

    printf("A soma dos %d naturais é: %d", numero, resultado);



    return 0;
}
