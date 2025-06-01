#include <stdio.h>



int buscar(int numeros[], int tamanho, int searchNumber){
    for (int i = 0; i < tamanho; i++){
        if (numeros[i] == searchNumber){
            return i;
            break;
        }
    }
    return -1;
}

int main(){

    int numeros[9];
    int searchNumber;

    printf("Digite 10 números:\n");
    for (int i = 0; i < 10; i++){
        int numero;
        scanf("%d", &numero);
        numeros[i] = numero;
    }
    
    printf("Digite um valor a ser buscado: ");
    scanf("%d", &searchNumber);

    buscar(numeros, 9, searchNumber);

    int numeroEncontrado = buscar(numeros, 9, searchNumber);
    numeroEncontrado != -1 ? printf("Número encontrado na posição: %d", numeroEncontrado) : printf("Número não encontrado no vetor.");

    return 0;
}