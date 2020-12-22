#include<stdio.h>

int main(){

    
    int i;
    float x;

    printf("Informe o valor: ");
    scanf("%f",&x);

for (i = 1; i <= 10; i++){
printf("%.0f + %d = %.0f\n",x,i,x + i);
}


printf("\n\n");
for (i = 1; i <= 10; i++){
        printf("%.0f - %d = %.0f\n",x,i,x - i);
}  
  

printf("\n\n");
for (i = 1; i<= 10; i++){
        printf("%.0f x %d = %.0f\n",x,i,x * i);
       
}


printf("\n\n");
for (i = 1; i <= 10; i++){
        printf("%.0f / %0.f = %.0f\n", x*i, x, x*i / x);

}
    return 0;
}

