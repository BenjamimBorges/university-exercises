 #include <stdio.h>
 
int main (){
    int mA[4][5], mB[4][5];
    int i, j;
 
    printf("insira as temperaturas em ºC para a matriz A:\n");
    for (i = 0; i < 4; i++){
        for ( j = 0; j < 5; j++){
            printf("linha nº[%d], coluna nº[%d]: ",i + 1, j + 1);
            scanf("%d",&mA[i][j]);
        }
    }
    printf("\n");
   printf("\ntemperatura em F da matriz B: ");   
   printf("\ncoluna nª1      coluna nª2      coluna nª3      coluna nª4      coluna nª5\n\n");
 
    for(i = 0; i < 4; i++){
        mB[i][0] = mA[i][0] * 9 / 5 + 32;
        mB[i][1] = mA[i][1] * 9 / 5 + 32;
        mB[i][2] = mA[i][2] * 9 / 5 + 32;
        mB[i][3] = mA[i][3] * 9 / 5 + 32;
        mB[i][4] = mA[i][4] * 9 / 5 + 32;
        
        printf("%4d         %8d         %10d         %7d        %7d\n",mB[i][0], mB[i][1], mB[i][2], mB[i][3],mB[i][4]);
    }
 
return 0;
}
