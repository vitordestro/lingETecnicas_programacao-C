#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
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
