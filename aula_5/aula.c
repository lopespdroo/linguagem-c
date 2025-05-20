#include <stdio.h>

int somar(int n1, int n2);

int main(){

    int n1 = 5, n2 = 2;

    int soma = somar(2,3);
    printf("Soma: %d", soma);
    
    return 0;
}

int somar(int n1, int n2){
    return n1 + n2;
}