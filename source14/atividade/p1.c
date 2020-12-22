    i = 1;
    do{
        printf("%.0f + %d = %.0f\n",x,i,x + i);
        i++;

    } while (i <= 10);





    calc();
    printf("Informe dois valores: ");
    scanf("%f %f",&y,&x);

    i = 1;
    do{
        printf("%.0f + %d = %.0f\n",x,i,x + i);
        i++;

    } while (i <= 10);

printf("\n\n");

    i = 1;
   do{
        printf("%.0f - %d = %.0f\n",x,i,x - i);
        i++;
    } while (i <= 10);

printf("\n\n");

    i = 1;
    do{
        printf("%.0f x %d = %.0f\n",x,i,x * i);
        i++;
    }while (i <= 10);

printf("\n\n");

    i = 1;
    do{
        printf("%.0f / %0.f = %.0f\n", x*i, x, x*i / x);
        i++;
    }while (i <= 10);

printf("segunda tabuada\n");

      i = 1;
    do{
        printf("%.0f + %d = %.0f\n",y,i,y + i);
        i++;

    } while (i <= 10);

printf("\n\n");

    i = 1;
   do{
        printf("%.0f - %d = %.0f\n",y,i,y - i);
        i++;
    } while (i <= 10);

printf("\n\n");

    i = 1;
    do{
        printf("%.0f x %d = %.0f\n",y,i,y * i);
        i++;
    }while (i <= 10);

printf("\n\n");

    i = 1;
    do{
        printf("%.0f / %0.f = %.0f\n", y*i, y, y*i / y);
        i++;
    }while (i <= 10);

    return 0;




    /*
    mexi aqui*/

    void area_quadrado(){
    printf("escreva o valor do lado do quadrado para se fazer o calculo de área");
}

void area_retangulo(){
    printf("escreva os valores dos lados do retangulo para se fazer o calculo de área");
}

void area_triangulo(){
    printf("escreva os valores da base e da altura do triangulo para se fazer o calculo de área");
}
/*
parte antiga*/
int main() 

int  i;
float result;
float x,k,j;

    calc();

    printf("\n");

    area_quadrado();
    printf("\n  lado: ");
        scanf("%f", &x);
        if(x == 0){
            printf("não existe área\n");
        }

    result = quadrado(x);
        printf(" a area do quadrado é: %1.f\n\n",result);

    area_retangulo();
    for(i = 1; i < 2; i++){
        printf("\n  lado_A: ");
        scanf("%f", &x);
        printf("  lado_B: ");
        scanf("%f",&k);
    }
    result = retangulo(x,k);
    printf(" a área do retangulo é: %1.f\n\n", result);

    area_triangulo();
    printf("\n  base: ");
        scanf("%f", &x);
    printf("  altura: ");
        scanf("%f",&j);

    result = triangulo(x,j);
        printf(" a area do triangulo é: %1.f\n", result);


/*lib/*
    /*
soma
*/
int somar(int A, int B){
    int C;
    C = A + B;
    return C;
}
/*
subtração
*/
int sub(int A, int B){
    int C;
    C = A - B;
    return C;
}
/*
multiplicação
*/
int mult(int A, int B){
    int C;
    C = A * B;
    return C;
}
/*
divisão
*/
int diva(int A, int B){
    int C;
    C = A / B;
    return C;
}

/*
juros simples
*/
float calcularJuros (float parcela, int dias, float juros){
    float valor;
    valor = parcela * (dias * juros)/100;
    return valor;
}
