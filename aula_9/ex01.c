#include <stdio.h>
#include <string.h>

int main(){

    char palavra[50];

    printf("Digite uma palavra: ");
    fgets(palavra, 50, stdin);
    
    palavra[strcspn(palavra, "\n")] = '\0';
    palavra[strcspn(palavra, " ")] = '\0';

    int qtdCaracteres = strlen(palavra);

    if (qtdCaracteres > 15){
        printf("Palavra longa. %d caracteres.", qtdCaracteres);
    } else if (qtdCaracteres > 8 && qtdCaracteres < 16)
    {
        printf("Palavra média. %d caracteres.", qtdCaracteres);
    } else if (qtdCaracteres > 5 && qtdCaracteres < 9){
        printf("Palavra pequena. %d caracteres.", qtdCaracteres);
    }
    

    return 0;
}