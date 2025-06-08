#include <stdio.h>
#include <string.h>

typedef struct Produto {
    char nome[50];
    float preco;
} Produto;

void buscarProduto(struct Produto produto[], char searchProduct[]){
    int encontrado = 0;
    for (int i = 0; i < 3; i++){
        if (strcmp(searchProduct, produto[i].nome) == 0){
            printf("A(o) %s custa R$ %.2f.", produto[i].nome, produto[i].preco);
            encontrado = 1;
            break;
        }
    }

    if (encontrado == 0){
        printf("Produto não encontrado.");
    }
}

int main(){

    Produto produto[3] = {{"Bolsa", 78.00},{"Tênis", 112.00}, {"Calça", 78.00}};
    char searchedProduct[50];

    printf("--- CADASTRO ---\n");
    for (int i = 0; i <3; i++){
        printf("\n--- Produto %d\nNome: %s\nPreço: R$ %.2f\n", i+1,produto[i].nome, produto[i].preco);
    }
    
    printf("Você deseja procurar qual produto?\n");
    fgets(searchedProduct, 50, stdin);
    searchedProduct[strcspn(searchedProduct, "\n")] = '\0'; 

    buscarProduto(produto, searchedProduct);

    return 0;
}