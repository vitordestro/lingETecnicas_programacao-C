#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    // int a,b,c,r;

    // printf("Entre com os valores para A B C :");
    // scanf("%d %d %d", &a, &b, &c);

    // if(a>b) {
    //     r = a;
    // }else {
    //     r = b;
    // }
    // if(c>r){
    //     r = c;
    // }

    // printf("%d eh o maior", r);
    
    // int numero;

    // printf("Digite um número --> ");
    // scanf("%d", &numero);

    // if(numero % 2 == 0 ){
    //     printf("%d é PAR!", numero);
    // }else {
    //     printf("%d é IMPAR!", numero);
    // }

    // int num, inverso, quadrado;

    // quadrado = num * num;
    // inverso = num * (-1);

    // printf("Digite um número --> ");
    // scanf("%d", &num);
    
    // num = (num > 0)? inverso : quadrado;
    // printf("%d", num);


    int valor1, valor2,r,sum,sub,mult,div;
    double h;


    printf("Insira um primeiro valor --> ");
    scanf("%d", &valor1);

    printf("Insira um segundo valor --> ");
    scanf("%d", &valor2);

    if(valor1 > 0 && valor2 > 0 ) {
        printf("Valores Positivos!");
        int menorQueDez = (valor1 < 10 && valor2 < 10)? 1:0;
        if(menorQueDez == 1) {
            printf("\nVerificando se os valores são primos...");
            if (
        (valor1 == 2 || valor1 == 3 || valor1 == 5 || valor1 == 7) &&
        (valor2 == 2 || valor2 == 3 || valor2 == 5 || valor2 == 7)
    )   {
          r = (valor1 *valor2)/2;
          h = sqrt((pow(valor1,2) + pow(valor2,2)));
          printf("\nA area %d e hipotenusa %.2f", r,h);
          
        }else {
            sum = valor1+valor2;
            sub = valor1-valor2;
            mult = valor1*valor2;
            div = valor1/valor2;
            printf("%d, %d, %d, %d", sum, sub, mult, div);
        }

        }else {
            char *saoMultiplos = (valor1 % valor2 == 0 || valor2 % valor1 == 0)? "sao multiplos": "nao sao multiplos";
            printf("%s", saoMultiplos);
        }
    }else {
        printf("Valores Negativos!\nInverso de %d = %d\nInverso de %d = %d", valor1, abs(valor1), valor2, abs(valor2));
    }
    
return 0;

}



    

