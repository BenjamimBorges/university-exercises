#include<stdio.h>
#include<stdlib.h>
#include"minhaBibliotecaAritmetica.h"


/*
Paradigma Procedural -> Baseado em chamadas de procedimentos (Sub-rotinas).
    1. Sub-rotinas
        1.1 Procedimentos -> É uma sub-rotina que não tem retorno
        1.2 Funções -> É uma sub-rotina que possue retorno -> dar um resposta
        1.3 Parâmetros -> Variáveis locais declarada dentro dos paranteses da subrotina, cujos valores precisam ser informados no momento que a Sub-rotina é chamada.
            1.3.1 Literal -> Literalmente o valor. Ex: 2, 4 'r'.
            1.3.2 Variável -> Valor estar numa variável e será copiado para o parâmetro.Ex n;
            1.3.3 Resultado de expressão aritmética -> Valor resultante de um calculo matemático. Ex: n * 4, 4 / 2, n + m;
            1.3.4 Retorno de uma função -> Valor retornado por alguma cujo retorno é do mesmo tipo do parâmetro. Ex. calcular()
    
    2. Escopo de variáveis
        2.1 Global - A variável tem acesso globalmente, ou seja em todas as subrotinas do programa.
        2.2 Local - A variável só é acessada dentro da sub-rotina onde ela foi declarada.

    3. Bibliotecas -> Conjunto de funções de uma mesma categoria.
    
    4. Best practices 
        4.1 Coesão X Acoplamento -> Alta coesão e baixo acoplamento
            4.1.1 Coesão -> define o quão reutilizável será uma subrotina
                4.1.1.1 Uma subrotina deve ter uma única responsabilide (objetivo)
                4.1.1.2 Uma subrotina deve manipular apenas dados (variáveis) que forem definidas dentro do seu escopo.
            4.1.2 Acoplamento -> define o quanto uma subrotina é dependente de dados externos, ou seja, inviabilizando a reutilização.
        4.2 Reutilização de código-> Capacidade de reutilizar funções, procedimentos no próprio projeto ou em projetos futuros
            

    


Sintaxe para criação de sub-rotinas

tipoRetorno nomeSubRotina(parametros){
    //instruções
}


*/



void menu(){
    printf("SOFTWARE PARA ACADEMIAS\n");
    printf("1. Cadastrar aluno\n");
    printf("2. Pagar mensalidade\n");
    printf("3. Sair\n");
} 



int main() {
    int res;
    int n1,n2;

    menu();
    printf("digite dois números: ");
    scanf("%d %d",&n1,&n2);
    
    res = somar(n1,n2);
    printf("%d + %d é igual a: %d\n\n",n1,n2,res);

    return EXIT_FAILURE;

}