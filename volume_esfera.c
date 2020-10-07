#include<stdio.h>

int main(){

    int volume, raio, raio_1, pass_1;

    printf("informe o raio da circunferência: ");
    scanf("%d", &raio);

    raio_1 = raio * raio * raio;
    pass_1 = 1,33 * 3,14159;
    volume = pass_1 * raio_1;

    printf("o volume da esfera é: %d \n", volume);
}