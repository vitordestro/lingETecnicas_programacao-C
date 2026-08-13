#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
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

       return 0;
}
