#include<stdio.h>

int main()
{
    int temperatura, temperatura_C;

    printf("\n\n\ninforme a temperatura: ");
    scanf("%d", &temperatura);

    temperatura_C = (temperatura - 32) ;
    temperatura_C * 5;

    printf("temperatura em celsius %d \n\n\n", temperatura_C);
}