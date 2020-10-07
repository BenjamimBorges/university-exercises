#include<stdio.h>

int main() {
    
    int volume, altura, largura, comprimento;

    printf("informe a altura do retângulo: ");
    scanf("%d", &altura);
    printf("informe a largura do retângulo: ");
    scanf("%d", &largura);
    printf("informe o comprimento do retângulo: ");
    scanf("%d", &comprimento);

    volume = altura * largura * comprimento;

    printf("O volume do retângulo %d \n", volume);

}