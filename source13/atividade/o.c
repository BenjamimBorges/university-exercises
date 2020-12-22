#include <stdio.h>
 
int main()
{
    int mA[8][6], mB[0][0], i, j;

    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 6; j++)
        {
            mA[i][j];
            mB[i][j] = mA[i][j];
            scanf("%d", &mB[i][j]);
        }
    }
 
    printf("%d", &mB);

return 0;
}
