#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que leia uma palavra,
 e verifique se ela um palindromo 
 
 
 Entrada: ABBA
 Saída: é um palíndromo
 
 Um palíndromo é uma plataforma, frase ou númer que protectedser lido
 da esquerda para a direita ou da direita para a esquerda,
 mantendo exatamene o mesmo sentido */


int main(int argc, char *argv[]){

    char palavra[30];

    scanf("%s", &palavra);
    printf("Inserido %s", palavra);
    printf("\n");

    int i, tamanho, tamanhoReal, verificador_palindromo;

    for(i = 0; i < 30 && palavra[i] != '\0'; i++){
        printf("\n%d -> %c ", i, palavra[i]);
    }

    tamanho = i-1;
    tamanhoReal = tamanho + 1;

    printf("\ntamanho real da palavra é %d", tamanhoReal);

    for(i = 0; i < tamanho; tamanho--, i++){
        if(palavra[i] != palavra[tamanho]){
            verificador_palindromo = 0;
            break;
        }else {
            verificador_palindromo = 1;
        }
        
    }

     if(verificador_palindromo == 1){
        printf("\nA palavra %s eh palindromo!", palavra);
     }else{
        printf("\nA palavra NAO EH palindromo.");
     }

    
    return 0;
}
