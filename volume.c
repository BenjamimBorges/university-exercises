#include<stdio.h>

int main()
{
    int volume, raio_da_lt, altura_1, altura_2;

    printf("\ninforme o raio: ");
    scanf("%d", &raio_da_lt);
    printf("\ninforme a altura: ");
    scanf("%d", &altura_1);

    altura_2 = altura_1 * altura_1;
    volume = raio_da_lt * altura_2;

    printf("O volume é de: %d \n", volume);
}