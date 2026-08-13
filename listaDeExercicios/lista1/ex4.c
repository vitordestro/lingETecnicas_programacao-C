#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

/* Faça um programa que leia, o salário fixo e o valor total em vendas de um vendedor.
Sabendo que este vendedor ganha 15% de comissão sobre suas vendas efetuadas.
Mostre o total a receber no final do mês, com duas casas decimais. */

float salarioFixo, valorTotalVendas, comissao;
    
    printf("Insira o seu salario: ");
    scanf("%f", &salarioFixo);
    
     printf("Insira o seu valor da suas vendas: ");
     scanf("%f", &valorTotalVendas);
          
     comissao = 0.15 * valorTotalVendas;
     salarioFixo += comissao;
     
     printf("O valor total a receber no final do mes  eh: %.2f", salarioFixo);
  
return 0;
  
}
