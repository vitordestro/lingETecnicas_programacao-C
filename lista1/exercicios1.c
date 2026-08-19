#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[]) {
	
	//EX 1: Faça um programa que leia dois números inteiros e depois os imprima na ordem inversa em que eles foram lidos
  
	int numero1, numero2;
	printf("\n Insira o valor do primeiro numero: ");
	scanf("\n%d", &numero1);
	
	printf("\n Insira o valor do segundo numero: ");
	scanf("\n%d", &numero2);
	
	printf("\n %d \n %d\n", numero2, numero1);
	
	/*EX 2:
  Faça um programa que leia um valor do tipo double e depois o imprima na forma de notação científica
O FORMATO PADRÃO É A × 10n, ONDE O NÚMERO É MAIOR OU IGUAL A 1 E MENOR QUE 10 (1 = A < 10), E O EXPOENTE N É UM NÚMERO INTEIRO.
CONSIDEREM SOMENTE VALORES POSITIVOS.*/

  double numDouble;
    printf("\nInsira um valor double: ");
    scanf("\n%lf", &numDouble);
    
    printf("\n O valor em notacao eh: %.2e\n", numDouble);
    
    
    /* EX 3:Implemente um programa que leia um número n [com n positivo & n = 64] e mostre na tela o seu valor em base binária (bits). */
 
 int n;
    int resultado1, resultado2, resultado3, resultado4, resultado5, resultado6;

    printf("\nInsira um numero entre 0 a 64:\n");
    scanf("\n%d", &n);

    resultado1 = (n / 32) % 2;
    resultado2 = (n / 16) % 2;
    resultado3 = (n / 8) % 2;
    resultado4 = (n / 4) % 2;
    resultado5 = (n / 2) % 2;
    resultado6 = n % 2;

    printf("%d%d%d%d%d%d",resultado1, resultado2,  resultado3,  resultado4, resultado5,  resultado6);
    
    
    /* EX 4: Faça um programa que leia, o salário fixo e o valor total em vendas de um vendedor.
Sabendo que este vendedor ganha 15% de comissão sobre suas vendas efetuadas.
Mostre o total a receber no final do mês, com duas casas decimais. */

float salarioFixo, valorTotalVendas, comissao;
    
    printf("\nInsira o seu salario: ");
    scanf("\n%f", &salarioFixo);
    
     printf("Insira o seu valor da suas vendas: ");
     scanf("\n%f", &valorTotalVendas);
          
     comissao = 0.15 * valorTotalVendas;
     salarioFixo += comissao;
     
     printf("\nO valor total a receber no final do mes  eh: %.2f\n", salarioFixo);
     
     
     //EX 5: Elabore um programa que peça ao usuário para digitar 4 valores. E mostre na tela a soma, a média e o produtório desses valores.
     
     int valor1, valor2, valor3, valor4, soma, media, produtorio;
	
	 printf("Insira o primero valor: ");
    scanf("\n%d", &valor1);
    
    printf("Insira o segundo valor: ");
    scanf("\n%d", &valor2);
    
    printf("Insira o tereiro valor: ");
    scanf("\n%d", &valor3);
    
    printf("Insira o quarto valor: ");
    scanf("\n%d", &valor4);
    
    soma = valor1 + valor2 + valor3 + valor4;
    media = soma / 4;
    produtorio = valor1 * valor2 * valor3 * valor4;
    
    printf("\n SOMA DOS VALORES : %d\n", soma);
    printf("\n MEDIA DOS VALORES : %d\n", media);
    printf("\n PRODUTORIO DOS VALORES : %d\n", produtorio);
     
     
     //EX 6: Leia um valor inteiro correspondente à idade de uma pessoa em dias e informe-a em anos, meses e dias.

    int diasIdade, anos, meses, diasRestantes;

    printf("\n Insira sua IDADE em DIAS: ");
    scanf("\n %d", &diasIdade);

    anos = diasIdade/365;
    diasRestantes = diasIdade % 365;
    meses = diasRestantes/30;
    diasRestantes = diasRestantes % 30;

    printf("\n %d ano(s)\n", anos);
    printf("\n %d mes(es)\n", meses);
    printf("\n %d dia(s)\n", diasRestantes);
    
    /*EX 7: Faça um programa que calcule e mostre o volume de uma esfera sendo fornecido o valor de seu raio (R).
    A fórmula para calcular o volume é: (4/3) * pi * R3.
    Considere (atribua) para pi o valor 3.14159 */

float volumeEsfera, raio, pi, raioCubo;

    printf("\n Insira o valor do raio: ");
    scanf("\n %f", &raio);

    pi = 3.14159;
    raioCubo = raio * raio * raio;

    volumeEsfera = (4.0/3.0) * pi * raioCubo;
    printf("\n O volume da esfera = %.2f\n", volumeEsfera);
    
    
    
    /* EX 8:
	Leia os quatro valores do usuário correspondentes às coordenadas em um plano cartesiano, p1(x1,y1) e p2(x2,y2)
	 e calcule e mostre a distância entre eles, aplicando a distância euclidiana, segundo a fórmula:

     d = v((x2-x1)² + (y2-y1)²)

     DICA: Utilize a função sqrt(), da biblioteca math.h para realizar o cálculo da raiz quadrada.*/
     
     
    float x1, y1, x2, y2, distancia;
    
    printf("Insira o valor de x1 e y1: ");
    scanf("\n%f %f", &x1, &y1);
    
    printf("Insira o valor de x2 e y2: ");
    scanf("\n%f  %f", &x2, &y2);
    

    distancia = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
    
    printf("\n A distancia entre o plano cartesiano 1 e 2, eh --> %.2f\n", distancia);
    
    return 0;
}
