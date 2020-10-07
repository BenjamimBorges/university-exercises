#include<stdio.h>

int main(){

    int A, B, C, D;
    
    printf("informe o valor de A: ");
    scanf("%d", &A);
    printf("informe o valor de B: ");
    scanf("%d", &B);
    printf("informe o valor de C: ");
    scanf("%d", &C);

    D = (A * A) + (B * B) + (C * C);

    printf("A soma dos quadrados das três variáveis é: %d \n", D);
}