#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Aula 6 de LTP - Prof. Dacio */

int main() {

    float valor1, valor2;
    float area, hipotenusa;
    float soma, diferenca, divisao, produto;

    int multiplo;
    int inverso1, inverso2;
    int inteiro1, inteiro2;

    printf("Digite dois numeros: ");
    scanf("%f %f", &valor1, &valor2);

    inverso1 = valor1 * -1;
    inverso2 = valor2 * -1;

    if (valor1 > 0 && valor2 > 0) {

        if (valor1 < 10 && valor2 < 10) {

            if ((valor1 == 2 || valor1 == 3 || valor1 == 5 || valor1 == 7) &&
                (valor2 == 2 || valor2 == 3 || valor2 == 5 || valor2 == 7)) {

                area = (valor1 * valor2) / 2;

                hipotenusa = sqrt(
                    pow(valor1, 2) + pow(valor2, 2)
                );

                printf("A area do triangulo: %.2f\n", area);
                printf("A hipotenusa: %.2f\n", hipotenusa);

            }
            else {

                soma = valor1 + valor2;
                diferenca = valor1 - valor2;
                divisao = valor1 / valor2;
                produto = valor1 * valor2;

                printf("Operacoes entre %.2f e %.2f:\n", valor1, valor2);
                printf("Soma: %.2f\n", soma);
                printf("Subtracao: %.2f\n", diferenca);
                printf("Divisao: %.2f\n", divisao);
                printf("Multiplicacao: %.2f\n", produto);
            }
        }

        else {

            inteiro1 = valor1;
            inteiro2 = valor2;

            multiplo = inteiro1 % inteiro2 == 0;

            printf("E multiplo? (1 = sim / 0 = nao): %d\n", multiplo);
        }
    }

    else {

        printf("Os valores inversos sao: %d e %d\n",
               inverso1, inverso2);
    }

    return 0;
}
