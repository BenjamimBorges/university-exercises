#include<stdio.h>

int main(){

    int A, B, C, D, P, S;

    printf("Informe o valor da variável A:");
    scanf("%d", &A);
    printf("Informe o valor da variável B:");
    scanf("%d", &B);
    printf("Informe o valor da variável C:");
    scanf("%d", &C);
    printf("Informe o valor da variável D:");
    scanf("%d", &D);

    P = A * C;
    S = B + D;

    printf("O valor do produto da variável A com a variável C é: %d \n", P);
    printf("O valor da soma das variáveis B e D é: %d \n", S); 
}
