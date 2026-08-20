#include <stdio.h>
#include <stdlib.h>


    int main(int argc, char *argv[]) {


    /* EX 1: Faça um programa que calcule o ano de nascimento de uma pessoa a partir de sua idade e do ano atual.*/
    
    int anoNascimento, idade, anoAtual;
    
    printf("\nInsira sua idade ate o final do ano: ");
    scanf("%d", &idade);
    
    printf("\n Insira o ano atual: ");
    scanf("%d", &anoAtual);
    
    anoNascimento = anoAtual - idade;
    
    printf("\nO ano do seu nascimento eh --> %d \n", anoNascimento);
        
    
    /*EX 2: Leia uma velocidade em km/h (quilômetros por hora) e apresente convertida em m/s (metros por segundo).
    A fórmula de conversão é M = K/3,6, sendo K a velocidade em km/h e M em m/s.*/

    float velocidadeKMH, velocidadeMS; 
   
    printf("\nInsira o valor da velocidade em (km/h): ");
    scanf("%f", &velocidadeKMH);
    
    velocidadeMS = velocidadeKMH/3.6;

    printf("\n A velocidade %f(Km/h) eh igual a %.2f(m/s)", velocidadeKMH, velocidadeMS);

    /*EX 3:
    Faça um programa que leia um valor em reais e a cotação do dólar. Em seguida, imprima o valor correspondente em dólares.*/
    
    float valorReais, valorDolar, cotacaoDolarAtual;

    printf("\nInsira o preco em reais --> ");
    scanf("%f", &valorReais);


    cotacaoDolarAtual = 0.1933;
    valorDolar = valorReais * cotacaoDolarAtual;

    printf("\n R$%.2f --> $%.2f", valorReais, valorDolar);


    /* EX 4: 
    Leia um valor que represente uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit.
    A fórmula de conversão é: F = C * (9.0/5.0) + 32.0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.*/

       float grausCelsius, grausFahrenheit;

       printf("\nInsira uma temperatura em graus Celsius --> ");
       scanf("%f", &grausCelsius);

       grausFahrenheit = grausCelsius * (9.0/5.0) + 32.0;
    
       printf("\n %.1fC --> %.2fF", grausCelsius, grausFahrenheit);

    /* EX: 5*
    Leia um ângulo em graus e apresente-o convertido em radianos. 
	A fórmula de conversão é R = G * p/180, sendo G o ângulo em graus e R em radianos e p = 3.141592.*/

    float anguloGraus, pi, radianos;
	
	printf("\nInsira um angulo em graus --> ");
    scanf("%f", &anguloGraus);
    
    pi = 3.141592;
    
    radianos = anguloGraus * pi/180;
    
    printf("\n O angulo: %.1f graus em radianos e = %1.f ", anguloGraus, radianos);
    
    
    /* EX 6:
	Faça um programa que leia um número inteiro e retorne seu antecessor e seu sucessor.*/
	
	int numero, antecessor, sucessor;
	
	printf("\nInsira um numero inteiro --> ");
    scanf("%d", &numero);
    
    antecessor = numero - 1 ;
    sucessor = numero + 1;
    
    printf("\n %d <- %d -> %d ", antecessor, numero, sucessor);
    
    
    /* EX: 7
	A importância de R$780.000,00 será dividida entre três ganhadores de um concurso, sendo que:
	
    O primeiro receberá 46% do total.
    O segundo receberá 32% do total.
    O terceiro receberá o restante.

    Calcule e imprima a quantia recebida por cada um dos ganhadores.*/
    
    
    float premio, ganhador1, ganhador2, ganhador3, restante;
    
    premio = 780000.0;
    
    ganhador1 = premio * 0.46;
    ganhador2 = premio * 0.32;
    restante = premio - ganhador1 - ganhador2;
    ganhador3 = restante;
    
    
    printf("\n PRIMEIRO GANHADOR GANHOU: %2.f", ganhador1);
    printf("\n SEGUNDO GANHADOR GANHOU: %2.f", ganhador2);
    printf("\n TERCEIRO GANHADOR GANHOU: %2.f", ganhador3);
    
    /* EX 8:
	Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica
	e informe-o expresso no formato horas: minutos:segundos.*/
		
	
    int valorSegundos, horas, minutos, segundosRestantes;
    
    printf("\n Insira um valor em segundos: ");
    scanf("%d", &valorSegundos);

    horas = valorSegundos / 3600; 
    segundosRestantes = valorSegundos % 3600;
    minutos = segundosRestantes / 60;
    segundosRestantes = segundosRestantes % 60;
    
    printf("\n %d:%d:%d", horas, minutos, segundosRestantes);

		
    /* EX 9: 
    Joãozinho quer calcular e mostrar a quantidade de litros de combustível gastos em uma viagem, ao utilizar um automóvel que faz 12 KM/L.
    Para isso, ele gostaria que você o auxiliasse através de um simples programa. 
    Para efetuar o cálculo, deve-se fornecer o tempo gasto na viagem (em horas) e a velocidade média durante a mesma (em km/h). 
    Assim, pode-se obter distância percorrida e, em seguida, calcular quantos litros seriam necessários.
    Mostre o valor com 3 casas decimais após o ponto.*/

    float quantidadeDeLitrosNecessaria, tempoGasto_horas, velocidadeMedia, distanciaPercorrida;

    printf("\n Insira o tempo gasto na viagem (em horas): ");
    scanf("%f", &tempoGasto_horas);

    printf("\n Insira a velocidade media do automovel (em km/h): ");
    scanf("%f", &velocidadeMedia);

    distanciaPercorrida = velocidadeMedia * tempoGasto_horas;
    quantidadeDeLitrosNecessaria = distanciaPercorrida / 12;

    printf("\n==============================================");
    printf("\n          CALCULO DE COMBUSTIVEL");
    printf("\n==============================================");

   printf("\n Tempo da viagem:       %.1f hora(s)", tempoGasto_horas);
   printf("\n Velocidade media:      %.1f km/h", velocidadeMedia);
   printf("\n Distancia percorrida:  %.1f km", distanciaPercorrida);
   printf("\n Combustivel necessario: %.3f litro(s)", quantidadeDeLitrosNecessaria);

    printf("\n==============================================\n");
		
    
	/*EX 10: 
	Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido da mensagem “eh o maior”.
	Utilize a fórmula:
	
    MaiorAB = (a + b + abs(a - b)) / 2*/
    
    int a,b,c, maior, maiorA_B;
    
    printf("\nInforme os valores a serem comparados: ");
    scanf("%d %d %d", &a,&b,&c);
    
    
    //conta
    
    maiorA_B = (a+b+abs(a-b))/2;
    maior = (maiorA_B+c+abs(maiorA_B - c))/2;
    
    printf("\n O maior entre |%d|%d|%d| = %d", a,b,c, maior);
    
    
    // agora comparao com 4 valores:
    

    int d, maiorC_D;
    
    printf("\nInforme os valores a serem comparados: ");
    scanf("%d %d %d %d", &a,&b,&c,&d);
    
    
    //conta
    
    maiorC_D = (c+d+abs(c-d))/2;
    maior = (maiorA_B + maiorC_D+abs(maiorA_B - maiorC_D))/2;
    
    
    printf("\nO maior entre |%d|%d|%d|%d| = %d", a,b,c,d, maior);
    
    return 0;


}
