#include <stdio.h>

int main() {

    float valorProduto, desconto, parcela, comissaoAvista, comissaoParcelada;
    
    printf("Digite o valor do produto: ");
    scanf("%f", &valorProduto);
    
    desconto = (valorProduto-(valorProduto*0.1));
    parcela = (valorProduto/3);
    comissaoAvista = (desconto*0.05);
    comissaoParcelada = (valorProduto*0.05);
    
    printf("Valor com dez por cento de desconto: R$ %.2f\n Valor de cada parcela (3x sem juro): R$ %.2f\n Comissão do vendedor (à vista): R$ %.2f\n Comissão do vendedor (parcelado): R$ %.2f", desconto, parcela, comissaoAvista, comissaoParcelada);

    return 0;