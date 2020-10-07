#include<stdio.h>

int main(){

    int A, B, C;

    printf("informe o valor de A: ");
    scanf("%d", &A);
    printf("informe o valor de B: ");
    scanf("%d", &B);

    C = (A - B) * (A - B);

    printf("o quadrado da diferença é: %d \n", C);
}