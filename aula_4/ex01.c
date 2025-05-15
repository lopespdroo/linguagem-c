#include <stdio.h>

int main(){

    int valorInicial, valorFinal;

    printf("Valor inicial: ");
    scanf("%d", &valorInicial);

    printf("Valor final: ");
    scanf("%d", &valorFinal);

    //RESOLUÇÃO COM VARIÁVEL DE CONTADOR
    /*for (int contador = valorInicial; contador <= valorFinal; contador++){
        
        printf("%d ", contador);
    }*/

    //RESOLUÇÃO SEM INICIALIZAR UMA VARIÁVEL DE CONTADOR
     for (valorInicial; valorInicial <= valorFinal; valorInicial++){
        
        printf("%d ", valorInicial);
    }

    return 0;
}