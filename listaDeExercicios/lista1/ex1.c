#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  
  //EX 1: Faça um programa que leia dois números inteiros e depois os imprima na ordem inversa em que eles foram lidos
  
	int numero1, numero2;
	printf("\n Insira o valor do primeiro numero: ");
	scanf("%d", &numero1);
	
	printf("\n Insira o valor do segundo numero: ");
	scanf("%d", &numero2);
	
	printf("\n %d \n %d", numero2, numero1);
  
	return 0;
}
