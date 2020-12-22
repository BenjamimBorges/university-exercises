#include <stdio.h>

int main(){

    int mE[4][4];
    int vA[4],vB[4], vC[4], vD[4];
    int i,j;

        printf("insira números para a matriz A: ");
        for(i = 0; i < 4; i++){
            scanf("%d", vA[i]);
        }

        printf("insira números para a matriz B: ");
        for(i = 0; i < 4; i++){
            scanf("%d", vB[i]);
        }

        printf("insira números para a matriz C: ");
        for(i = 0; i < 4; i++){
            scanf("%d", vC[i]);
        }

        printf("insira números para a matriz D: ");
        for(i = 0; i < 4; i++){
            scanf("%d", vD[i]);
        }

        printf("\n");
        printf("\nMatriz E: ");

        for(i = 0; i < 4; i++){   
        
        mE[0][0] = vA[0] * 2;
        mE[0][1] = vA[1] * 2;
        mE[0][2] = vA[2] * 2;
        mE[0][3] = vA[3] * 2;
 
        mE[0][0] = vA[0] * 3;
        mE[0][1] = vA[1] * 3;
        mE[0][2] = vA[2] * 3;
        mE[0][3] = vA[3] * 3;

        mE[0][0] = vA[0] * 4;
        mE[0][1] = vA[1] * 4;
        mE[0][2] = vA[2] * 4;
        mE[0][3] = vA[3] * 4;

        mE[0][0] += vA[0];
        mE[0][1] += vA[1];
        mE[0][2] += vA[2];
        mE[0][3] += vA[3];


        printf("|%1d|  |%1d|  |%1d|  |%1d|  |%1d|\n",mE);
    }
    return 0;
}