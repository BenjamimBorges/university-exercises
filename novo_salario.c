#include<stdio.h>

int main(){
    
    float SM, PR, PR_1, NS;

    printf("digite o seu salário: ");
    scanf("%g", &SM);
    printf("informe o reajuste percentual: ");
    scanf("%g", &PR);
    PR_1 = PR/100;

    NS = PR_1 * SM;

    printf("%g \n", NS);
}