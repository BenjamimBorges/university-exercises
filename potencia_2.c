#include<stdio.h>

int main(){

    int A, B, C;

    printf("informe um valor para A: ");
    scanf("%d", &A);
    printf("informe um valor para B: ");
    scanf("%d", &B);
   
    C = A ^ B;

    printf("O valor de C é: %d \n", C);
}