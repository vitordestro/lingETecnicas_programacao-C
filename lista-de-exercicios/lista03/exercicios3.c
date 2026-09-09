#include <stdio.h>
#include <stdlib.h>


int multiplicacao(int num, int mult) {
    return num * mult;

}

int main(int argc, char *argv[]) {

    int num1, num2, num3, num4, num5, num6, num7, num8, num9, soma, resto, restoII, digito1, digito2;

    printf("Insira um CPF:\n");
    scanf("%d %d %d %d %d %d %d %d %d - %d %d", &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9, &digito1, &digito2);

    soma = multiplicacao(num1, 10)
         + multiplicacao(num2, 9)
         + multiplicacao(num3, 8)
         + multiplicacao(num4, 7)
         + multiplicacao(num5, 6)
         + multiplicacao(num6, 5)
         + multiplicacao(num7, 4)
         + multiplicacao(num8, 3)
         + multiplicacao(num9, 2);

    resto = (soma * 10) % 11;

    if(resto == 10) {
        resto = 0;
    }

    if(resto == digito1) {
        printf("Primeiro digito valido!\n");
    } else {
        printf("Primeiro digito invalido!\n");
    }


    soma =  multiplicacao(num1, 11)
           + multiplicacao(num2, 10)
           + multiplicacao(num3, 9)
           + multiplicacao(num4, 8)
           + multiplicacao(num5, 7)
           + multiplicacao(num6, 6)
           + multiplicacao(num7, 5)
           + multiplicacao(num8, 4)
           + multiplicacao(num9, 3)
           + multiplicacao(digito1, 2);
    
    
    restoII = (soma * 10) % 11;

    if(restoII == 10){
        restoII = 0;
    }


     if(restoII == digito2) {
        printf("Segundo digito valido!\n");
    } else {
        printf("Segundo digito invalido!\n");
    }

    if(resto == digito1 && restoII == digito2) {
        printf("CPF Valido!\n");
    } else {
        printf("CPF Invalido!\n");
    }

    return 0;
}
