#include <stdio.h>
#include <string.h>

int main(){

    char frase1[80], frase2[40];

    printf("Digite a primeira frase: ");
    fgets(frase1, 40, stdin);
    
    printf("Digite a primeira frase: ");
    fgets(frase2, 40, stdin);

    frase1[strcspn(frase1, "\n")] = '\0';
    frase2[strcspn(frase1, "\n")] = '\0';

    strcat(frase1, frase2);

    printf("Frase resultante: %s", frase1);

    return 0;
}