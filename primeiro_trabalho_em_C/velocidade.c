#include<stdio.h>

int main(){

    int velocidade, distancia, tempo;

    printf("informe a distancia percorrida(km): ");
    scanf("%d", &distancia);
    printf("informe o período de tempo que o projétil levou para percorrer o espaço: ");
    scanf("%d", &tempo);

    velocidade = (distancia * 1000) / (tempo * 60);

    printf("A velocidade em m/s do projétil é: %d \n", velocidade);
}