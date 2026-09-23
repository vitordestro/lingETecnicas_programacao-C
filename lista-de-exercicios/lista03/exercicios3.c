#include <stdio.h>
#include <stdlib.h>

#define AZUL "\033[34m"
#define VERDE "\033[32m"
#define VERMELHO "\033[31m"
#define RESET "\033[0m"


int multiplicacao(int num, int mult)
{
    return num * mult;
}

void exec1()
{
    /* Exercício 01: Validador de CPF
    Validar documentos é uma tarefa comum em sistemas de cadastro.
    Um CPF não é apenas uma sequência de 11 números;
     ele possui uma lógica matemática baseada em dígitos verificadores para evitar erros de digitação e fraudes básicas. */

    int num1, num2, num3, num4, num5, num6, num7, num8, num9, soma, resto, restoII, digito1, digito2;

    printf("Insira um CPF:\nOBS - Nao use pontos E nao de Espacos\n>");
    scanf("%d %d %d %d %d %d %d %d %d - %d %d", &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9, &digito1, &digito2);

    soma = multiplicacao(num1, 10) + multiplicacao(num2, 9) + multiplicacao(num3, 8) + multiplicacao(num4, 7) + multiplicacao(num5, 6) + multiplicacao(num6, 5) + multiplicacao(num7, 4) + multiplicacao(num8, 3) + multiplicacao(num9, 2);

    resto = (soma * 10) % 11;

    if (resto == 10)
    {
        resto = 0;
    }

    if (resto == digito1)
    {
        printf("Primeiro digito valido!\n");
    }
    else
    {
        printf("Primeiro digito invalido!\n");
    }

    soma = multiplicacao(num1, 11) + multiplicacao(num2, 10) + multiplicacao(num3, 9) + multiplicacao(num4, 8) + multiplicacao(num5, 7) + multiplicacao(num6, 6) + multiplicacao(num7, 5) + multiplicacao(num8, 4) + multiplicacao(num9, 3) + multiplicacao(digito1, 2);

    restoII = (soma * 10) % 11;

    if (restoII == 10)
    {
        restoII = 0;
    }

    if (restoII == digito2)
    {
        printf("Segundo digito valido!\n");
    }
    else
    {
        printf("Segundo digito invalido!\n");
    }

    if (resto == digito1 && restoII == digito2)
    {
        printf("CPF Valido!\n");
    }
    else
    {
        printf("CPF Invalido!\n");
    }
}

float celsiusParaFahrenheit(float c)
{
    return (c * 9.0 / 5.0) + 32.0;
}

float fahrenheitParaCelsius(float f)
{
    return (f - 32.0) * 5.0 / 9.0;
}

void exec2()
{

    /* Exercício 02: Conversor Dinâmico

    Introdução:
    Cálculos de temperatura são essenciais em diversas áreas da ciência e engenharia.
    A conversão precisa entre diferentes escalas garante a exatidão dos dados em projetos e medições.*/

    int opcao;

    printf("CONVERSOR DINAMICO DE TEMPERATURA!\n\n");

    printf("Deseja converter de Celsius para Fahrenheit ou de Fahrenheit para Celsius?\n");
    printf("[1] Celsius --> Fahrenheit\n");
    printf("[2] Fahrenheit --> Celsius\n");

    printf("Opcao: ");
    scanf("%d", &opcao);

    float temperatura;

    if (opcao == 1)
    {

        printf("Coloque uma temperatura em Celsius: ");
        scanf("%f", &temperatura);

        float fahrenheit = celsiusParaFahrenheit(temperatura);

        printf("A temperatura em Celsius de %.1f C --> %.1f F", temperatura, fahrenheit);
    }
    else if (opcao == 2)
    {

        printf("Coloque uma temperatura em Fahrenheit: ");
        scanf("%f", &temperatura);

        float celsius = fahrenheitParaCelsius(temperatura);

        printf("A temperatura em Fahrenheit de %.2f F --> %.2f C", temperatura, celsius);
    }
    else
    {

        printf("COLOQUE UMA OPCAO VALIDA!");
    }
}

const char *avaliacaoMedia(float media)
{

    if (media >= 7.0 && media <= 10.0)
    {
        printf(AZUL "APROVADO!\n" RESET);
        return "Aprovado";
    }
    else if (media >= 4.0 && media < 7.0)
    {
        printf(VERDE "EXAME!\n" RESET);
        return "Exame";
    }
    else
    {
        printf(VERMELHO "REPROVADO!\n" RESET);
        return "Reprovado";
    }
}

void exec3()
{

    /* Exercício 03: Média Escolar
      Introdução:

      Sistemas acadêmicos utilizam estruturas condicionais para decidir o fluxo do aluno.
      Além do cálculo aritmético, o sistema deve interpretar o resultado e
      fornecer um feedback visual e textual adequado.*/

    printf("MEDIA ESCOLAR!\n\n");

    char aluno[50];
    const char *sitFinal;

    float nota1, nota2, nota3, media;

    printf("Insira o nome do Aluno: ");
    scanf("%49s", aluno);

    printf("%s, por favor insira suas tres notas\n", aluno);

    printf("Nota 1: ");
    scanf("%f", &nota1);

    printf("Nota 2: ");
    scanf("%f", &nota2);

    printf("Nota 3: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    sitFinal = avaliacaoMedia(media);

    printf("Media: %.1f\n", media);
    printf("Situacao: %s\n", sitFinal);
}

int entregaDeCedulas(int valorSaqueTotal){


    int valorAtual = valorSaqueTotal;

    int quantidadeCedulas100 = valorSaqueTotal / 100;
    valorAtual = valorAtual % 100;

    int quantidadeDeCedulas50 = valorAtual / 50;
    valorAtual = valorAtual % 50;

    int quantidadeDeCedulas10 = valorAtual / 10;
    valorAtual = valorAtual % 10;

    int quantidadeDeCedulas5 = valorAtual / 5;
    valorAtual = valorAtual % 5;

    int quantidadeDeCedulas2 = valorAtual / 2;
    valorAtual = valorAtual % 2;

    int quantidadeDeCedulas1 = valorAtual / 1;
    valorAtual = valorAtual % 1;

    printf("\n--- CEDULAS ENTREGUES ---\n");
    printf("R$ 100: %d cedula(s)\n", quantidadeCedulas100);
    printf("R$ 50:  %d cedula(s)\n", quantidadeDeCedulas50);
    printf("R$ 10:  %d cedula(s)\n", quantidadeDeCedulas10);
    printf("R$ 5:   %d cedula(s)\n", quantidadeDeCedulas5);
    printf("R$ 2:   %d cedula(s)\n", quantidadeDeCedulas2);
    printf("R$ 1:   %d cedula(s)\n", quantidadeDeCedulas1);
    
}

void exec5() {

    /* Exercício 05: Terminal Infinity Cash
    
    Introdução:
    A lógica de um caixa eletrônico baseia-se em otimizar a entrega de cédulas, priorizando sempre as notas de maior valor disponível.*/

    int valorSaque;

    printf("BEM VINDO AO TERMINAL INFINITY CASH!\n");
    printf("QUANTO DESEJA SACAR?: ");
    scanf("%d", &valorSaque);

    entregaDeCedulas(valorSaque);


}

float calc_inss(float valorSalario){
    
    if(valorSalario <= 1412.00) {
        return valorSalario * 0.075;
    
    }else if(valorSalario <= 2666.68) {
        return valorSalario * 0.09;
        
    }else if (valorSalario <= 4000.03) {
        return valorSalario * 0.12;

    }else if (valorSalario > 4000.03){
        return valorSalario * 0.14;
    }
}
    
float calc_irpf(float salarioBase){

    float deducao, aliquota;


    if(salarioBase <= 2259.20){
        return 0;

    }else if (salarioBase <= 2826.65){
        deducao = 169.44;
        aliquota = 0.075;
        return (salarioBase * aliquota) - deducao;
        
    }else if (salarioBase <= 3751.05){
        deducao = 381.44;
        aliquota = 0.15;
        return (salarioBase * aliquota) - deducao;
    
    }else if (salarioBase <= 4664.68){
        deducao = 662.77;
        aliquota = 0.225;
        return (salarioBase * aliquota) - deducao;
    }else {
        deducao = 896.00;
        aliquota = 0.275;
        return (salarioBase * aliquota) - deducao;
    }
}

float calc_salarioBruto(float horas, float valor ){
    return horas * valor;
}

float folhaDePagamento(float salarioBruto,  float descontoINSS, float descontoIRPF){
    float valorLiquido;
    
    valorLiquido = salarioBruto - descontoINSS - descontoIRPF;

    printf("======================================================\n");
    printf("    RECIBO DE PAGAMENTO DE SALARIO (CONTRA-CHEQUE)    \n");
    printf("======================================================\n");
    printf(" Salario Bruto (Horas x Valor):   R$  %.2f\n", salarioBruto);
    printf(" (-) Desconto INSS:               R$   %.2f \n", descontoINSS);
    printf(" (-) Desconto IRPF:               R$   %.2f\n", descontoIRPF);
    printf("------------------------------------------------------\n");
    printf(" LIQUIDO A RECEBER:               R$  %.2f\n", valorLiquido);  
    printf("======================================================\n");

    
}


void exec7(){



    printf("CALCULO DE INSS!\n");
    
    float salarioBrutoINSS, valorComDesconto;

    printf("Insira seu salario bruto: ");
    scanf("%f", &salarioBrutoINSS);

    valorComDesconto = calc_inss(salarioBrutoINSS);

    printf("%.2f ", valorComDesconto);

}

void exec8() {


    float salarioBase, valorIRPF;

    printf("Calculo de IRPF!\n");

    printf("Insira o seu salario base: ");
    scanf("%f", &salarioBase);

    valorIRPF = calc_irpf(salarioBase);

    printf("Valor do Imposto Retido: %.2f\n", valorIRPF);

}

void exec9() {

    printf("EMISSAO DE CONTRA-CHEQUE\n");

    float valorHora, quantidadeHorasMes;
    printf("\nInsira o seu valor de horas: ");
    scanf("%f", &valorHora);

    printf("\nInsira a quantidade de horas: ");
    scanf("%f", &quantidadeHorasMes);

    float salarioBruto = calc_salarioBruto(quantidadeHorasMes, valorHora);
    float descontoINSS = calc_inss(salarioBruto);
    float salarioBase = salarioBruto - descontoINSS;
    float descontoIRPF = calc_irpf(salarioBase);
    float contraCheque = folhaDePagamento(salarioBruto, descontoINSS, descontoIRPF);
}

int main()
{

    int op;
    printf("Insira o numero do exercicio que deseja realizar --> [1] [2] [3] [5] [7] [8] [9] \n");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        exec1();
        break;
    case 2:
        exec2();
        break;

    case 3:
        exec3();
        break;

    case 5:
        exec5();
        break;
    case 7:
        exec7();
        break;
    case 8:
        exec8();
        break;
    case 9:
        exec9();
        break;
    }

    return 0;
}
