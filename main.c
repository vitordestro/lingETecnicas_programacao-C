#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {

//1) Faça um programa que receba dois números, efetue e soma e mostre o resultado na tela.	
	int a,b,c;
	
	a = 8;
	b = 19;
	c = a+b;
	printf("A soma de %d + %d = %d", a,b,c);
	
//2)Faça um programa que calcule a área de um triângulo retângulo, dados os valores de sua base e altura	
	int base = 5;
	int altura = 10;
    int area = base * altura/2;
	printf("\n A Area do trinagulo eh %d", area);

//3) Faça um programa que calcule a média aritmética entre três valores informados. Mostre me a média na tela.
	int notaAluno1 = 9;
	int notaAluno2 = 6;
	float notaAluno3 = 7.5;
	float mediaAritmetica = (notaAluno1 + notaAluno2 + notaAluno3 ) / 3;
	printf("\n A media das notas dos alunos sao %.2f\n", mediaAritmetica);
	
//4)Faça um programa que receba o raio de um círculo, calcule e mostre sua área. (Área = pi * R2)

     int raio = 4;
     float pi = 3.14;
     float areaCirculo = pi * (2 * raio);
     printf("\n A area do circulo eh %.2f\n", areaCirculo);
	
	return 0;
	
}













