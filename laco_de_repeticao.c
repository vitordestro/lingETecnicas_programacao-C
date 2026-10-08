#include <stdio.h>
#include <stdlib.h>

/*Crie um programa que leia 10 numeros do teclado
e mostre na tela o maior entre os 5 primeiros e o menor
entre os restantes*/

int compara (int a, int b){
    if(a > b) return a;
    else return b;
}

int menorValor(int a, int b){
    if(a < b) return a;
    else return b;
}

int main(int argc, char *argv[]) {

    int valor[10];
    int i, maior, menor;

    printf("Vamos ler os valores: \n");
    // for(inicial; condição; incremento)
    //Passar os 10 valores
    for(i = 0; i < 10; i++){ 
        scanf("%d", &valor[i]);           
    }
    // para os maiores valores

    for(i = 1, maior = valor[0]; i<5; i+=2){
        int temp = compara(valor[i], valor[i+1]);
        maior = compara(maior, temp);       
    }
    printf("\n %d", maior);

    // agr comparando os menores valores

    menor = valor[6];

    for(i = 6; i<10; i+=2){
        menor = menorValor(valor[i], valor[i+1]);
        // continuo em caso (dei commit ate aqui)
    }



    return 0;
}
