#include<stdio.h>

int main() {

    int i;
    float x;

    printf("Informe o valor: ");
    scanf("%f",&x);

    i = 1;
    do{
        printf("%.0f + %d = %.0f\n",x,i,x + i);
        i++;

    } while (i <= 10);


printf("\n\n");


    i = 1;
   do{
        printf("%.0f - %d = %.0f\n",x,i,x - i);
        i++;
    } while (i <= 10);


printf("\n\n");


    i = 1;
    do{
        printf("%.0f x %d = %.0f\n",x,i,x * i);
        i++;
    }while (i <= 10);


printf("\n\n");


    i = 1;
    do{
        printf("%.0f / %0.f = %.0f\n", x*i, x, x*i / x);
        i++;
    }while (i <= 10);



    return 0;
}