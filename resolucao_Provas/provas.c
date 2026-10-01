#include <stdio.h>
#include <stdlib.h>

int descobrirNumeroImpar(int num){
	if(num % 2 == 0){
		printf("O numero %d eh Par!", num);
	}else {
		printf("O numero %d eh Impar!", num);
	}	
}

int descobrirMultiplo_5(int num){
	if(num % 5 == 0){
		printf("O numero %d eh multiplo de 5!", num);
		
	}else {
		printf("Numero nao multiplo de 5!");
	}
}

void exec0_provaESOFT_M_A() {
	int num1, num2, num3, num4;
	printf("Escolha 4 numeros inteiros aleatorios: ");
	scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
	
	descobrirNumeroImpar(num1);
	descobrirNumeroImpar(num2);
	descobrirNumeroImpar(num3);
	descobrirNumeroImpar(num4);
	
	descobrirMultiplo_5(num1);
	descobrirMultiplo_5(num2);
	descobrirMultiplo_5(num3);
	descobrirMultiplo_5(num4);
	
}

int qntd_mochilas_necessarias(int itens, int mochilaEspaco){
	if(itens > mochilaEspaco) {
		int mochilaExtra = itens / mochilaEspaco;
		printf("Quantidade Necessaria de Mochilas Extra sao -> %d", mochilaExtra);
	}else {
		printf("Capacidade Atual da Mochila eh suficiente!");
	}
}

void exec1_provaESOFT_M_A(){
	
	int qntd_total_itens, capacidadeMax_Mochila;
	
	printf("Qual a Quantidade total de itens que voce tem?: ");
	scanf("%d", &qntd_total_itens);
	printf("Qual a Capacidade maxima da mochila?: ");
	scanf("%d", &capacidadeMax_Mochila);
	
	qntd_mochilas_necessarias(qntd_total_itens, capacidadeMax_Mochila);
	
}

void exec2_provaESOFT_M_A(){
	

    float valor, resultado;
    int codigo;

    printf("\nDigite o valor a ser convertido: ");
    scanf("%f", &valor);

    printf("Digite o codigo da conversao: ");
    scanf("%d", &codigo);

    switch (codigo) {

        case 1:
            resultado = valor * 1.8 + 32;
            printf("Resultado: %.2f Fahrenheit (F)\n", resultado);
            break;

        case 2:
            resultado = (valor - 32) / 1.8;
            printf("Resultado: %.2f Celsius (C)\n", resultado);
            break;

        case 3:
            resultado = valor + 273.15;
            printf("Resultado: %.2f Kelvin (K)\n", resultado);
            break;

        case 4:
            resultado = valor / 1609.34;
            printf("Resultado: %.2f Milhas (mi)\n", resultado);
            break;

        case 5:
            resultado = valor * 1609.34;
            printf("Resultado: %.2f Metros (m)\n", resultado);
            break;

        case 8:
            resultado = valor * 2.205;
            printf("Resultado: %.2f Libras (lb)\n", resultado);
            break;

        case 9:
            resultado = valor / 2.205;
            printf("Resultado: %.2f Quilogramas (kg)\n", resultado);
            break;

        case 10:
            resultado = valor / 1.609;
            printf("Resultado: %.2f mph\n", resultado);
            break;

        case 11:
            resultado = valor * 1.609;
            printf("Resultado: %.2f km/h\n", resultado);
            break;

        default:
            printf("Codigo de conversao invalido!\n");
            break;
    }
}
	

void prova_Esoft_MA() {
	
	int op;
	
	printf("QUAL EXERCICIO VC DESEJA REALIZAR? [0] [1] [2]?\n");
	scanf("%d", &op);
	
	switch(op) {
		case 0:
			exec0_provaESOFT_M_A();
			break;
		case 1:
			exec1_provaESOFT_M_A();
			break;
		case 2:
			 exec2_provaESOFT_M_A();
			break;
        default:
            printf("ESCOLHA UM EX VALIDO!");
            break;
		
	}
}

float qntd_mochilas_necessarias_sobra(float itens, float mochilaEspaco){
	if(itens > mochilaEspaco) {
		float mochilaExtra = itens / mochilaEspaco;
		printf("Quantidade Necessaria de Mochilas Extra sao -> %.0f", mochilaExtra);
        printf("E a Quantidade de itens que sobraram na ultima mochila é")
	}else {
		printf("Capacidade Atual da Mochila eh suficiente!");
	}
}

void exec0_provaESOFT_M_B(){

    int qntd_total_itens, capacidadeMax_Mochila;
	
	printf("Qual a Quantidade total de itens que voce tem?: ");
	scanf("%d", &qntd_total_itens);
	printf("Qual a Capacidade maxima da mochila?: ");
	scanf("%d", &capacidadeMax_Mochila);
	
	qntd_mochilas_necessarias(qntd_total_itens, capacidadeMax_Mochila);

}

void prova_Esoft_MB(){
    int op;
	
	printf("QUAL EXERCICIO VC DESEJA REALIZAR? [0] [1] [2]?\n");
	scanf("%d", &op);
	
	switch(op) {
		case 0:
			exec0_provaESOFT_M_B();
			break;
		case 1:
			exec1_provaESOFT_M_B();
			break;
		case 2:
			 exec2_provaESOFT_M_B();
			break;
        default:
            printf("ESCOLHA UM EX VALIDO!");
            break;
		
	}

}

void prova_ADSIS_NA(){
    int op;
	
	printf("QUAL EXERCICIO VC DESEJA REALIZAR? [0] [1] [2]?\n");
	scanf("%d", &op);
	
	switch(op) {
		case 0:
			exec0_provaADSIS_NA();
			break;
		case 1:
			exec1_provaADSIS_NA();
			break;
		case 2:
			 exec2_provaADSIS_NA();
			break;
        default:
            printf("ESCOLHA UM EX VALIDO!");
            break;
		
	}
}

int main(int argc, char *argv[]) {
	
	int op_Prova, op_Exercicio;

    printf("Qual Prova deseja realizar?:\n1.[ADSIS N A]\n2.[ESOFT M A]\n3.[ESOFT M B]\n");
    scanf("%d", &op_Prova);
    
    switch(op_Prova){
        // case 1:
        //    prova_ADSIS_NA();
        //    break;
        case 2:
           prova_Esoft_MA();
            break;
        // case 3:
        //     prova_Esoft_MB();
        //     break;
        default:
            printf("Selecione um Prova Valida!");
            break;
        
    }

    

	return 0;
} 
