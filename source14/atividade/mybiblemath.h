/*
área quadrado
*/

float quadrado()
{
    float x, area;

    printf("escreva o valor do lado do quadrado para se fazer o calculo de área\n\nInforme: ");
    scanf("%f", &x);
        if(x == 0){
            printf("não existe área\n");
            exit(0);
        }

    area = x * x;
    return printf("\no resultado é: %0.1f\n\nobrigado por usar a calculadora digital\n", area);
}

/*
área retangulo
*/
float retangulo()
{
    float a, b, area;
    printf("escreva o valor dos lados do retangulo para se fazer o calculo de área: \n");

    printf("lado a: ");
    scanf("%f", &a);
        if(a == 0){
            printf("não existe área\n");
            exit(0);
        }

    printf("lado b: ");
    scanf("%f", &b);
        if(b == 0){
            printf("não existe área\n");
            exit(0);
        }

    area = a * b;
    return printf("\no resultado é: %0.1f\n\nobrigado por usar a calculadora digital!\n", area); 
}

/*
área triangulo
*/
float triangulo()
{
    float b, h, area;

    printf("escreva o valor da base e da altura triangulo para se fazer o calculo de área: \n");

    printf("Informe o valor de base: ");
    scanf("%f", &b);
        if(b == 0){
            printf("não existe área\n");
            exit(0);
        }

    printf("Informe o valor da altura: ");
    scanf("%f", &h);
        if(h == 0){
            printf("não existe área\n");
            exit(0);
        }

    area = b * h / 2;
    return printf("\no resultado é: %0.1f\n\nobrigado por usar a calculadora digital!\n", area);
}

saida(){
    
    printf("\nobrigado por usar a calculadora digital!\n");
    exit(0);
}