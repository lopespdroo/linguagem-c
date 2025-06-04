#include <stdio.h>
#include <string.h>

int main(){

    //string são manipuladas como arrays de caracteres
    //todo array de string finaliza seu array com o elemento "\0"
    /*char nome[] = "Alice";
    char primeiraLetra = nome[0];

    printf("%c", primeiraLetra); //leitura da primeira letra do array

    nome[0] = 'M';

    printf("%c", nome[0]); //leitura da primeira letra do array com a nova substituição*/


    //imprimindo todos os caracteres de um array-palavra
    /*char nome[] = "Pedro";
    int i = 0;

    while (nome[i] != '\0'){
        printf("%c\n", nome[i]);
        i++;
    }*/

    //contornando alguns problemas do "scanf"
    /*char nomeCompleto[50];

    printf("Digite seu nome completo: ");
    scanf("%49[^\n]", nomeCompleto);

    printf("Nome completo: %s\n", nomeCompleto);*/

    char nomeCompleto[50];

    printf("Digite seu nome completo: ");
    fgets(nomeCompleto, 50, stdin);

    nomeCompleto[strcspn(nomeCompleto, "\n")] = '\0';

    printf("Nome completo: %s\n", nomeCompleto);

    return 0;
}