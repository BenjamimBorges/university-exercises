#include <stdio.h>
#include <stdlib.h>
#include "mybiblemath.h"

void calc(){
    printf("Bem-vindo a sua calculadora digital!\n");
    printf("aqui vc poderá ver calcular a área de poligonos planos!\n");
    printf("***Menu de seleção!***\n\n");
   
}
int main()
{

    int select;

    calc();
    printf("Selecione o poligono\n1 - Quadrado\n2 - Retangulo\n3 - Triangulo\n4 - Saída \n\nSelecione um dos poligonos aqui: ");
    scanf("%d", &select);

    if (select == 1)
    {
        quadrado();
    }

        if (select == 2)
    {
        retangulo();
    }

        if (select == 3)
    {
        triangulo();
    }

    if (select == 4){
            saida();
    }

return EXIT_FAILURE;
}