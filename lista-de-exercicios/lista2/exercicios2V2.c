#include <stdio.h>
#include <stdlib.h>

void exec8(){
    
    int valorSegundos, horas, minutos, segundosRestantes;
    
    printf("\n Insira um valor em segundos: ");
    scanf("%d", &valorSegundos);

    horas = valorSegundos / 3600; 
    segundosRestantes = valorSegundos % 3600;
    minutos = segundosRestantes / 60;
    segundosRestantes = segundosRestantes % 60;
    
    printf("\n %d:%d:%d", horas, minutos, segundosRestantes);
    }

void exec3(){
float grausCelsius, grausFahrenheit;

        printf("\nInsira uma temperatura em graus Celsius --> ");
        scanf("%f", &grausCelsius);

       grausFahrenheit = grausCelsius * (9.0/5.0) + 32.0;
    
        printf("\n %.1fC --> %.2fF", grausCelsius, grausFahrenheit);
}

void exec2(){
        float valorReais, valorDolar, cotacaoDolarAtual;

    printf("\nInsira o preco em reais --> ");
    scanf("%f", &valorReais);


    cotacaoDolarAtual = 0.1933;
    valorDolar = valorReais * cotacaoDolarAtual;
    printf("\n R$%.2f --> $%.2f", valorReais, valorDolar);

}

int main(int argc, char *argv[]) 
{                                                                                
    int op;
    printf("Insira uma opcao do exercicio que quer resolver [2] | [3] | [8]:\n ");
    scanf("%d", &op);

    switch (op) {
    case 2:
       exec2();
    break;

    case 3:
    exec3();
        break;

       case 8:
        exec8();
            
        default:
        break;
    }
    
    
    return 0;
}
