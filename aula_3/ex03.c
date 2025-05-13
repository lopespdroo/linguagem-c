#include <stdio.h>

int main(){

    float peso, altura, imc;

    printf("Qual o seu peso? ");
    scanf("%f", &peso);
    printf("E qual a sua altura(em metros)? ");
    scanf("%f", &altura);

    imc = (peso/(altura*altura));

    if (imc>=40){
        printf("Com %.2f kg e %.2f m de altura, seu IMC é: %.2f\n Você tem Obesidade Grau 3.", peso, altura, imc);
    } else if (imc>=35) {
        printf("Com %.2f kg e %.2f m de altura, seu IMC é: %.2f\n Você tem Obesidade Grau 2.", peso, altura, imc);
    } else if (imc>=30) {
        printf("Com %.2f kg e %.2f m de altura, seu IMC é: %.2f\n Você tem Obesidade Grau 1.", peso, altura, imc);
    } else if (imc>=25) {
        printf("Com %.2f kg e %.2f m de altura, seu IMC é: %.2f\n Você tem Sobrepeso.", peso, altura, imc);
    } else if (imc>=18.5) {
        printf("Com %.2f kg e %.2f m de altura, seu IMC é: %.2f\n Você tem Peso normal.", peso, altura, imc);
    } else {
        printf("Com %.2f kg e %.2f m de altura, seu IMC é: %.2f\n Você tem Obesidade Grau 3.", peso, altura, imc);
    }

    return 0;
}