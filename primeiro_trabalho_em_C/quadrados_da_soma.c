#include<stdio.h>

int main(){

    int A, B, C, D;

    printf("informe um valor para a variável A: ");
    scanf("%d", &A);
    printf("informe um valor para a variável B: ");
    scanf("%d", &B);
    printf("informe um valor para a variável C: ");
    scanf("%d", &C);

    D = (A + B + C) * (A + B + C);

    printf("O valor do quadrado das somas é: %d \n", D); 
}