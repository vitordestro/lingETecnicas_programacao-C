#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  
  //1)EX 1:
  
	int numero1, numero2;
	printf("\n Insira o valor do primeiro numero: ");
	scanf("%d", &numero1);
	
	printf("\n Insira o valor do segundo numero: ");
	scanf("%d", &numero2);
	
	
	printf("\n %d \n %d", numero2, numero1);
	return 0;


//2)EX 2:

    double numDouble;
    printf("Insira um valor double: ");
    scanf("%lf", &numDouble);
    
    printf("\n O valor em notacao eh: %.2e", numDouble);

    int n;
	printf("INSIRA O INTEIRO POSITIVO: ");
	scanf("%d", &n)  
    
    if (n & 8)
        printf("1");
    else
        printf("0");

    // bit 2 (valor 4)
    if (n & 4)
        printf("1");
    else
        printf("0");

    // bit 1 (valor 2)
    if (n & 2)
        printf("1");
    else
        printf("0");

    // bit 0 (valor 1)
    if (n & 1)
        printf("1");
    else
        printf("0");

    printf("\n");

//4) EX 4:
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
