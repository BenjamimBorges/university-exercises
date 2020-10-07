#include<stdio.h>

int main(){

    int A, B, C1, C2, C3, C4;

    printf("informe o valor de A: ");
    scanf("%d", &A);
    printf("informe o valor de B: ");
    scanf("%d", &B);

    C1 = A + B;
    C2 = A - B;
    C3 = A * B;
    C4 = A / B;

    printf("a soma de A com B é: %d \n", C1);
    printf("a subtração de A com B é: %d \n", C2);
    printf("o produto de A com B é: %d \n", C3);
    printf("o dividendo de A com B é: %d \n", C4);

}