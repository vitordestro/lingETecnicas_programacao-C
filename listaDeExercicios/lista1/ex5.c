#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int valor1, valor2, valor3, valor4, soma, media, produtorio;
	
	 printf("Insira o primero valor: ");
    scanf("%d", &valor1);
    
    printf("Insira o segundo valor: ");
    scanf("%d", &valor2);
    
    printf("Insira o tereiro valor: ");
    scanf("%d", &valor3);
    
    printf("Insira o quarto valor: ");
    scanf("%d", &valor4);
    
    soma = valor1 + valor2 + valor3 + valor4;
    media = soma / 4;
    produtorio = valor1 * valor2 * valor3 * valor4;
    
    printf("\n SOMA DOS VALORES : %d", soma);
    printf("\n MEDIA DOS VALORES : %d", media);
    printf("\n PRODUTORIO DOS VALORES : %d", produtorio);
    
      return 0;
}
