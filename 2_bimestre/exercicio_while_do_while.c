#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Elabore um programa que peça ao usuario para digitar 10 numeros
que sejam inteiros positivos, e ignore os negativos. E mostre na tela
o resultado da soma e a média desses valores
--OBS: não precisa usar vetor, usem os laços da aula de hoje, 
while e do while*/


int main(){


    int digito, i, soma, cont;
    float media; 
    soma = 0;  
    cont = 0;

    i = 0;
    while (i< 10){
        printf("Insira dez números positivos! -> ");
        scanf("%d", &digito);
        cont++;
        
        if(digito > 0) {
            soma += digito;
            i++;
        }
         
    }
    
  media = soma / cont;
  printf("soma = %d e media = %1.f", soma, media);

 // Utilizando o do while

 
    soma = 0;
    i = 0;

    do {
        printf("\nInsira um numero positivo: ");
        scanf("%d", &digito);

        if (digito > 0) {
            soma += digito;
            i++;
        }

    } while (i < 10);

    media = soma / 10.0;

    printf("Soma = %d e media = %.1f\n", soma, media);

    

   
    return 0;
}
