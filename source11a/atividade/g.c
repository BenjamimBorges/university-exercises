#include<stdio.h>
#include<math.h>

int main()
{

    int i, exp, resultado;

    i = 3;
    exp = 0;

    while (exp <= 15)
    {
    resultado = pow(i, exp);
        printf("%d Os números são:\n", resultado);
    exp++;

    }
    
return 0;
}