#include <stdio.h>
#include <string.h>

int ehPalindromo(char palavra[]){
    int tamanhoPalavra = strlen(palavra);
    char palavraInversa[tamanhoPalavra+1]; //cria uma char de array com tamanho suficiente para armazenar a palavra invertida

    for (int i = 0; i < tamanhoPalavra; i++){
        palavraInversa[i] = palavra[tamanhoPalavra - 1 - i];
    }
    palavraInversa[tamanhoPalavra] = '\0'; //finaliza o array que tem a palavra invertida com o terminador de palavra '\0'

    return strcmp(palavra, palavraInversa) == 0 ? 1 : 0; //retorna o inverso do valor de strcmp, já que foi pedido '0' para verdadeiro
}

int main(){

    char palavra[30];

    printf("Digite uma palavra: ");
    fgets(palavra, 30, stdin);
    palavra[strcspn(palavra, "\n")] = '\0';

    int res = ehPalindromo(palavra);

    res == 1 ? printf("É palíndromo!") : printf("Não é palíndromo."); 


    return 0;
}