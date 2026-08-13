#include <stdio.h>
#include <stdlib.h>

int main() {
  /*EX 2:
  Faça um programa que leia um valor do tipo double e depois o imprima na forma de notação científica
O FORMATO PADRÃO É A × 10ⁿ, ONDE O NÚMERO É MAIOR OU IGUAL A 1 E MENOR QUE 10 (1 ≤ A < 10), E O EXPOENTE N É UM NÚMERO INTEIRO.
CONSIDEREM SOMENTE VALORES POSITIVOS.*/

  double numDouble;
    printf("Insira um valor double: ");
    scanf("%lf", &numDouble);
    
    printf("\n O valor em notacao eh: %.2e", numDouble);

   return 0;
}
