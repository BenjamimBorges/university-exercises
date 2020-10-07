#include<stdio.h>

int main()
{
    int prestacao, prestacao_1, valor, taxa, taxa_1, tempo;

    printf("\ninforme o valor: ");
    scanf("%d", &valor);
    printf("\ninforme a taxa: ");
    scanf("%d", &taxa);
    printf("\ninforme o tempo: ");
    scanf("%d", &tempo);

    taxa_1 = taxa / 100;

    prestacao_1 = (valor * tempo) * taxa_1;
    prestacao = valor * prestacao_1;

    printf("as prestações serão de: %d \n", prestacao );


    
}
