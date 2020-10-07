#include<stdio.h>

int main(){

    int A, R, R_1;

    printf("informe o raio da circunferência: ");
    scanf("%d", &R);

    R_1 = R * R;
    A = R_1 * 3,14159;

    printf("%d \n", A);
}