#include<stdio.h>

int main(){

    int i, sm, i_par;

    i = 1;
    sm = 0;

    while(i <= 500){
        i_par = i % 2;

            if (i_par == 0){
                printf("%d Número par!\n", i);
                sm = sm + i;
            }

        i++;
    
    }

    printf("%d", sm);

    return 0;
}