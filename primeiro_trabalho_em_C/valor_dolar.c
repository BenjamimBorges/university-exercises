#include<stdio.h>

int main(){

    int valor_dolar, dinheiro_usuario, cotacao_dolar_atual;

    printf("informe o valor em real que possue: ");
    scanf("%d", &dinheiro_usuario);
    printf("informe a cotação atual do dolar em relação ao real: ");
    scanf("%d", &cotacao_dolar_atual);  

    valor_dolar = dinheiro_usuario / cotacao_dolar_atual;

    printf("O valor em real convertido para dolar é: %d \n", valor_dolar);
}