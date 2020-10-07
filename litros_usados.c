#include<stdio.h>

int main()
{
    int velocidade, distancia, tempo, litros_usados;

    printf("\ninforme a velocidade do veículo: ");
    scanf("%d", &velocidade);
    printf("\ninforme o tempo necessário: ");
    scanf("%d", &tempo);
    tempo = tempo / 60;
    distancia = velocidade * tempo;
    
    printf("A distancia percorrida foi de: %d \n", distancia);
    litros_usados = distancia / 12;

    printf("A quantidade de comubustivél usada foi: %d \n", litros_usados );

}