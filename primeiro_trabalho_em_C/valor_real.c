#include<stdio.h>

int main(){

    int valor_real, dinheiro_usuario, cotacao_dolar_atual;

    printf("informe o valor em dolar que possue: ");
    scanf("%d", &dinheiro_usuario);
    printf("informe a cotação atual do dolar em relação ao real: ");
    scanf("%d", &cotacao_dolar_atual);

    valor_real = dinheiro_usuario * cotacao_dolar_atual;

    printf("O valor em dolar convertido para real é: %d \n", valor_real);
}