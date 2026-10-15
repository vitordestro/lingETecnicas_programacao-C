#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Lista de Exercícios */

int main(){

    // int i, j, k, n,r;

    // /* vamos relembrar algumas estruturas que vimos essa semana
    //   Laço for repete um conjunto de instruções, de um valor inicial
    // *(incializacao), até uma determinada condição, realizando uma operação(incremento)
    // e cada execução[sempre]
    // */

    // for(i=0, j=1; i<10; i++, j--)|{
    //     printf("esse é o laco FOR");
    // }

    // /* Laço WHILE (enquanto), que testa se uma condição é verdadeira, caso seja executa
    // um bloco de comandos repetindo o processo enquanto a condição for avaliada com
    // verdadeira*/

    // while(i<10){
    //     printf("%d, laco WHILE", i);
    //     if(n%2 == 0) i++;
    //     n++;
    // }

    // /* Laco DO WHILE, semelhante ao laço while, porém antes de realizar
    // a verificação ele executa o conjunto de instruções para após a execução
    // realizar a verificação da condição */

    // do{
    //     printf("%d, laco DO WHILE", i);
    //     if(n%2 == 0) i++;
    //     n++;
    // } while (i<10);

    
    // Exercício 1;
    /*Elabore um programa que permita a entrada de 3 valores
    E conte do primeiro valor inserido, até o segundo valor, com o passo da contagem
    pelo terceiro valor
    ex: 1,8,2 >> contar de 1 a 8, com passo 2 = 3,5,7.  */

    int valor1, valor2, valor3_razao, i;

    printf("Insira o primeiro VALOR: ");
    scanf("%d", &valor1);

    printf("Insira o segundo VALOR: ");
    scanf("%d", &valor2);

    printf("Insira o terceiro VALOR (Razão): ");
    scanf("%d", &valor3_razao);


    if(valor1 <= valor2) {
    for(i = valor1; i <= valor2; i+= valor3_razao ){
        printf("Contando... %d\n", i);
    }
     }else {
         for(i = valor1; i >= valor2; i -= valor3_razao) {
            printf("%d ", i);
        }
     }

    // Exercício 2;
    /* Faça um programa que receba um numero n e realize a soma dos n primeiros termos
    da sequencia definido como:
    [S = 1/2; 1/4; 1/8; 1/16... N] */

    float num;

    printf("Digite um Numero: ");
    scanf("%f", &num);

    if(num > 0 ){
        for(i = 1; i == num ; i*=2   )
    }



    // Exercício 3;
    /* Crie um programa que exiba na tela, o triângulo de pascal. */
    return 0;
}
