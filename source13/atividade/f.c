#include <stdio.h>
 
int main (){
    int A[5][4], B[5][4];
    int i = 0, j = 0;
 
    printf("insira números para Matriz A: \n");
 
    for (i = 0; i < 5; i++){
        for ( j = 0; j < 4; j++){
            printf("Coluna %d, Linha %d:",j + 1, i + 1);
            scanf("%d",&A[i][j]);
        }
    }
    printf("números da matriz B: ");   
    printf("\ncoluna 1      coluna 2      coluna 3      coluna 4\n\n");
 
    for(i=0; i<5; i++){
        for (B[i][0] = 1; A[i][0] > 1; A[i][0]--){
            B[i][0] *= A[i][0];
    }
        for (B[i][1] = 1; A[i][1] > 1; A[i][1]--){
            B[i][1] *= A[i][1];
    }
        for (B[i][2] = 1; A[i][2] > 1; A[i][2]--){
            B[i][2] *= A[i][2];
    }
        for (B[i][3] = 1; A[i][3] > 1; A[i][3]--){
            B[i][3] *= A[i][3];
    }
        printf("%5d         %5d         %5d         %5d\n",B[i][0], B[i][1], B[i][2], B[i][3]);
    }
return 0;
/*acima de 10 dá um erro que não sei explicar poderia ajudar depois prof */
 
}
