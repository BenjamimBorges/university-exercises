#include<stdio.h>

int main(){
    float base;
    int i, total, expoente;

    total = 1;

    printf("\nDigite a base: ");
    scanf("%f", &base);
    printf("\nDigite o expoente: ");
    scanf("%d", &expoente);

    for (i = 0; i < expoente; i++)
    {
        total *= base;
    }
    printf("%0.0f elevado a %d = %d", base, expoente, total);
}