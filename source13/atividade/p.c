#include<stdio.h>
#include<stdlib.h>
 
int main ()
{
    float par = 0, impar = 0, par_por, impar_por;
    int mA[10][7];
    int  i = 0, j = 0; 
 
    for (i = 0; i < 10; i++){   
        printf("Insira valores para a linha nº%d da matriz A: \n",i + 1);   
        for (j = 0; j < 7; j++){  
            scanf("%d",&mA[i][j]);  
         }
    }
/* condições */
    for (i = 0; i < 10; i++){
      for (j = 0; j < 7; j++){
        if(mA[i][j] % 2 == 0){
          par = par + 1;
        }
        if(mA[i][j] % 2 != 0){
          impar = impar + 1;
        }
      }
    }

    par_por = par * 100/70;
    impar_por = impar * 100/70;
 
    printf("    A quantidade de números pares inseridos na matriz A é : %.0f \n",par);
    printf("    A quantidade em porcentagem de números pares inseridos na matriz é: %.1f% \n",par_por);
    printf("\n");
    printf("    A quantidade de números ímpares inseridos na matriz é: %.0f \n",impar);
    printf("    A quantidade em porcentagem de números ímpares inseridos na matriz é: %.1f% \n",impar_por);

  return 0; 
}