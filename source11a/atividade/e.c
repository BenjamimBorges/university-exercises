#include<stdio.h>

int main(){
    
    int i, sm, soma, i_impar;

    i = 1;
    sm = 0;
    soma = 0;

    while(i <= 20){
        i_impar = i % 2;

            if (i_impar != 0){
                printf("%d Número impar!\n", i);
                sm = soma + i;
            }

        i++;
    
    }

    printf("%d", sm);




return 0;
}