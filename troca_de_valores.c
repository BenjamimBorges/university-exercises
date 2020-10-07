#include<stdio.h>

int main(){

    int A, B, cont;

    printf("informe um valor: ");
    scanf("%d", &A);
    printf("informe um valor: ");
    scanf("%d", &B);

    cont = A;
    A = B;
    B = cont;

    printf("o valor de A é : %d \n", A);
    printf("o valor de B é: %d ", B );
}