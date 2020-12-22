#include<stdio.h>
int main()
{
    int num1, num2, num3, num4, num5, maior, menor ;

    printf("Digite o primeiro número:\n" );
    scanf("%d", &num1);
    printf("Digite o segundo número:\n" );
    scanf("%d", &num2);
    printf("Digite o terceiro número:\n" );
    scanf("%d", &num3);
    printf("Digite o quarto número:\n" );
    scanf("%d", &num4);
    printf("Digite o quinto número:\n" );
    scanf("%d", &num5);

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            if (num1 > num4)
            {
                if (num1 > num5)
                    maior = num1;
                else
                    maior = num5;
            }
            else
            maior = num4;
        }
        else
        maior = num3;
            
    }
    else
        maior = num2;
printf("o maior número foi: %d\n", maior );

    if (num1 < num2)
    {
        if (num1 < num3)
        {
            if (num1 < num4)
            {
                if (num1 <  num5)
                    menor = num1;
                else
                    menor = num5;
            }
            else
            menor = num4;
        }
        else
        menor = num3;
            
    }
    else
        menor = num2;

    printf("o menor número foi: %d\n", menor );
}