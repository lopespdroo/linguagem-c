#include <stdio.h>

int main(){

    int numeros[10];

    for (int i = 0; i < 10; i++){
        int numero;
        printf("Digite o valor: ");
        scanf("%d", &numero);
        numeros[i] = numero;
    }
    
    printf("Valores na ordem inversa:");
    
    for (int i = 9; i > 0; i--){
         printf("\n%d", numeros[i]);
    }

    return 0;
}