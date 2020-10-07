#include<stdio.h>

int main()
{
    int pass1, temperatura, temperatura_F;

    printf("\n\n\ninforme a temperatura: ");
    scanf("%d", &temperatura);

    pass1 = temperatura * (9 / 5);
    temperatura_F = pass1 + 32;
  
    printf("temperatura calculada = %d farenheit\n\n\n ", temperatura_F);
}