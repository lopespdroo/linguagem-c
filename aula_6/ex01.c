#include <stdio.h>

void imprimir(int numero, int contador){
    if (contador <= numero){
        printf("%d ", contador);
        imprimir(numero, contador + 1);
    }
}

int main(){

    int numero;

    printf("Informe o valor de N: ");
    scanf("%d", &numero);

    imprimir(numero, 1);
    

    return 0;
}