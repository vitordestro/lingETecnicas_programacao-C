#include <stdio.h>
#include <stdlib.h>


    int main(int argc, char *argv[]) {
    
    /* Leia uma velocidade em km/h (quilômetros por hora) e apresente convertida em m/s (metros por segundo). A fórmula de conversão é M = K/3,6, sendo K a velocidade em km/h e M em m/s.*/

    int velocidadeKMH; 
    float velocidadeMS;

    printf("\nInsira o valor da velocidade em (km/h): ");
    scanf("\n%d", &velocidadeKMH);
    
    velocidadeMS = velocidadeKMH/3.6;

    printf("\n A velocidade %d(Km/h) eh igual a %.2f(m/s)", velocidadeKMH, velocidadeMS);

    /*EX 3:
    Faça um programa que leia um valor em reais e a cotação do dólar. Em seguida, imprima o valor correspondente em dólares.*/
    
    float valorReais, valorDolar, cotacaoDolarAtual;

    printf("\nInsira o preco em reais -->");
    scanf("\n%f", &valorReais);


    cotacaoDolarAtual = 0.1933;
    valorDolar = valorReais * cotacaoDolarAtual;

    printf("\n R$%.2f --> $%.2f", valorReais, valorDolar);


    /* EX 4: 
    Leia um valor que represente uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. A fórmula de conversão é: F = C * (9.0/5.0) + 32.0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.*/

       float grausCelsius, grausFahrenheit;

       printf("\nInsira uma temperatura em graus Celsius -->");
       scanf("\n%f", &grausCelsius);

       grausFahrenheit = grausCelsius * (9.0/5.0) + 32.0;
    
       printf("\n %.1fC --> %.1fF", grausCelsius, grausFahrenheit);

    /* EX: 5*/



    return 0;
}
