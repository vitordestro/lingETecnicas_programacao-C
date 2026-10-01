#include <stdio.h>
#include <stdlib.h>


int descobrirNumeroImpar(int num) {

    if (num % 2 == 0) {
        printf("O numero %d eh Par!\n", num);
    }
    else {
        printf("O numero %d eh Impar!\n", num);
    }

    return 0;
}


int descobrirMultiplo_5(int num) {

    if (num % 5 == 0) {
        printf("O numero %d eh multiplo de 5!\n", num);
    }
    else {
        printf("Numero nao multiplo de 5!\n");
    }

    return 0;
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


int qntd_mochilas_necessarias(int itens, int mochilaEspaco) {

    if (itens > mochilaEspaco) {

        int mochilaExtra = itens / mochilaEspaco;

        printf("Quantidade Necessaria de Mochilas Extra sao -> %d\n", mochilaExtra);
    }
    else {

        printf("Capacidade Atual da Mochila eh suficiente!\n");
    }

    return 0;
}


void exec1_provaESOFT_M_A() {

    int qntd_total_itens, capacidadeMax_Mochila;

    printf("Qual a Quantidade total de itens que voce tem?: ");
    scanf("%d", &qntd_total_itens);

    printf("Qual a Capacidade maxima da mochila?: ");
    scanf("%d", &capacidadeMax_Mochila);

    qntd_mochilas_necessarias(qntd_total_itens, capacidadeMax_Mochila);
}


void exec2_provaESOFT_M_A() {

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
            printf("ESCOLHA UM EX VALIDO!\n");
            break;
    }
}


/* ESOFT M B - EXERCICIO 0 */

int qntd_mochilas_necessarias_sobra(int itens, int mochilaEspaco) {

    int mochilas;
    int sobra;

    mochilas = itens / mochilaEspaco;
    sobra = itens % mochilaEspaco;

    printf("Quantidade de mochilas totalmente preenchidas: %d\n", mochilas);
    printf("Quantidade de itens que sobraram: %d\n", sobra);

    return 0;
}


void exec0_provaESOFT_M_B() {

    int qntd_total_itens, capacidadeMax_Mochila;

    printf("Qual a Quantidade total de itens que voce tem?: ");
    scanf("%d", &qntd_total_itens);

    printf("Qual a Capacidade maxima da mochila?: ");
    scanf("%d", &capacidadeMax_Mochila);

    qntd_mochilas_necessarias_sobra(
        qntd_total_itens,
        capacidadeMax_Mochila
    );
}

void exec1_provaESOFT_M_B() {

    int num1, num2, num3;

    printf("Digite tres numeros inteiros: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 == num2 || num1 == num3 || num2 == num3) {

        printf("Os numeros tem que ser distintos!\n");
    }
    else {

        if (num1 < num2 && num2 < num3) {

            printf("%d %d %d\n", num1, num2, num3);
        }

        else if (num1 < num3 && num3 < num2) {

            printf("%d %d %d\n", num1, num3, num2);
        }

        else if (num2 < num1 && num1 < num3) {

            printf("%d %d %d\n", num2, num1, num3);
        }

        else if (num2 < num3 && num3 < num1) {

            printf("%d %d %d\n", num2, num3, num1);
        }

        else if (num3 < num1 && num1 < num2) {

            printf("%d %d %d\n", num3, num1, num2);
        }

        else {

            printf("%d %d %d\n", num3, num2, num1);
        }
    }
}

void exec2_provaESOFT_M_B() {

    int valor1, valor2;
    int codigo;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    printf("1 - Maior que (>)\n");
    printf("2 - Menor que (<)\n");
    printf("3 - Igual (==)\n");
    printf("4 - Diferente (!=)\n");

    printf("Digite o codigo da operacao: ");
    scanf("%d", &codigo);

    switch (codigo) {

        case 1:

            if (valor1 > valor2) {
                printf("Verdadeiro\n");
            }
            else {
                printf("Falso\n");
            }

            break;


        case 2:

            if (valor1 < valor2) {
                printf("Verdadeiro\n");
            }
            else {
                printf("Falso\n");
            }

            break;


        case 3:

            if (valor1 == valor2) {
                printf("Verdadeiro\n");
            }
            else {
                printf("Falso\n");
            }

            break;


        case 4:

            if (valor1 != valor2) {
                printf("Verdadeiro\n");
            }
            else {
                printf("Falso\n");
            }

            break;


        default:

            printf("operador invalido\n");

            break;
    }
}

void prova_Esoft_MB() {

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
            printf("ESCOLHA UM EX VALIDO!\n");
            break;
    }
}

void prova_ADSIS_NA() {

    int op;

    printf("QUAL EXERCICIO VC DESEJA REALIZAR? [0] [1] [2]?\n");
    scanf("%d", &op);

    /*
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
            printf("ESCOLHA UM EX VALIDO!\n");
            break;
    }
    */
}


/* MAIN */

int main(int argc, char *argv[]) {

    int op_Prova;

    printf("Qual Prova deseja realizar?:\n");
    printf("1.[ADSIS N A]\n");
    printf("2.[ESOFT M A]\n");
    printf("3.[ESOFT M B]\n");

    scanf("%d", &op_Prova);

    switch(op_Prova) {

        /*
        case 1:
            prova_ADSIS_NA();
            break;
        */

        case 2:
            prova_Esoft_MA();
            break;

        case 3:
            prova_Esoft_MB();
            break;

        default:
            printf("Selecione um Prova Valida!\n");
            break;
    }

    return 0;
}
