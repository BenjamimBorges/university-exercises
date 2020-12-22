#include <stdio.h>
 
int main()
{
    int matrizA[7][7], i, j;

    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            if (matrizA[i][j] % 2 == 0)
            {
                continue;
            }
        }
    }
    printf("Digite 7 valores: ");
    scanf("Esses valores são pares: %d", &matrizA[i][j]);
    
    printf("%d", &matrizA);

return 0;
}
