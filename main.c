#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.141592


int main(int argc, char *argv[]) {

//1) Faça um programa que receba dois números, efetue e soma e mostre o resultado na tela.	
	int a,b,c;
	
	a = 8;
	b = 19;
	c = a+b;
	printf("\n A soma de %d + %d = %d", a,b,c);
	
//2)Faça um programa que calcule a área de um triângulo retângulo, dados os valores de sua base e altura

    float base, altura, area;
    
	printf("\n Insira a base do triangulo: ");
    scanf("%f", &base);
    
    printf("\n Insira a altura do triangulo: ");
    scanf("%f", &altura);
    
    area = (base * altura)/2;
    printf("\n A area do triangulo retangulo com base %.2f e altura %.2f eh igual = %.2f", base, altura, area);
	

//3) Faça um programa que calcule a média aritmética entre três valores informados. Mostre me a média na tela.

    int notaAluno1, notaAluno2, notaAluno3, mediaAritmetica;
    
	printf("\n Insira a nota do primeiro aluno: ");
    scanf("%d", &notaAluno1);
    
    printf("\n Insira a nota do segundo aluno: ");
    scanf("%d", &notaAluno2);
    
    printf("\n Insira a nota do terceiro aluno: ");
    scanf("%d", &notaAluno3);
    

	mediaAritmetica = (notaAluno1 + notaAluno2 + notaAluno3 ) / 3;
	printf("\n A media das notas dos alunos sao: %d ", mediaAritmetica);
	
//4)Faça um programa que receba o raio de um círculo, calcule e mostre sua área. (Área = pi * R2)
     
	float raio, areaCirculo;     
    
    printf("\n Insira o raio do circulo: ");
    scanf("%f", &raio);
    
    
     areaCirculo = pi * pow(raio,2);
     printf("\n A area do circulo com raio %.2f\n eh = %.2f\n", raio, areaCirculo);
	
	return 0;
	
}












