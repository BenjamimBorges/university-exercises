#include<stdio.h>

int main(){

    int A, B, C;

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    B = A + 1;
    C = A - 1;

    printf("o sucessor de A é: %d \n", B);
    printf("o antecessor de A é: %d \n", C);
}