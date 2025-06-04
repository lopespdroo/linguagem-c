#include <stdio.h>
#include <string.h>

int main(){

    char palavra[3][30]; //cria uma matriz com 3 slots que conseguem armazenar 30 caracteres cada um

    for (int i = 0; i < 3; i++){
        printf("Palavra [%d]: ", i+1);
        fgets(palavra[i], 30, stdin);
        palavra[i][strcspn(palavra[i],"\n")] = '\0';
    }

    for (int i = 2; i >= 0; i--){
        printf("%s\n", palavra[i]);
    }

    return 0;
}