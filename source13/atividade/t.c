#include <stdio.h>
 
int main (){
 
    int mA[5][6], mB[5][6];
    int i,j;

    printf("insira valores para A:");
    for(i = 0; i < 5; i++){                                                  
        for(j = 0; j < 6; j++){
            if(mA[i][j] / 2 == 0){
                scanf("%d", mA[i][j]);
            }
            else{
                printf("valor inválido");
            }
        }
    }

    printf("insira valores para B: ");
    for(i = 0; i < 5; i++){
        for(j = 0; j < 6; j++){
            if(mB[i][j] / 2 != 0){
                scanf("%d", mB[i][j]);
            }
            else{
            printf("valor invalido");
            }
        }
    }

    printf("matriz A %d:           matriz B %d: ",mA[i][j], mB[i][j]);
}