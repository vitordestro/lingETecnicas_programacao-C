#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
 /* Implemente um programa que leia um número n [com n positivo & n ≤ 64] e mostre na tela o seu valor em base binária (bits). */
 
 int n;
    int resultado1, resultado2, resultado3, resultado4, resultado5, resultado6;

    printf("Insira um numero entre 0 a 64: ");
    scanf("%d", &n);

    resultado1 = (n / 32) % 2;
    resultado2 = (n / 16) % 2;
    resultado3 = (n / 8) % 2;
    resultado4 = (n / 4) % 2;
    resultado5 = (n / 2) % 2;
    resultado6 = n % 2;

    printf("%d%d%d%d%d%d",resultado1, resultado2,  resultado3,  resultado4, resultado5,  resultado6);
  
return 0;
}
