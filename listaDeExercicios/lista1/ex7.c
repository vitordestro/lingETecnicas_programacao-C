#include <stdio.h>
#include <stdlib.h>

/*EX 7: Faça um programa que calcule e mostre o volume de uma esfera sendo fornecido o valor de seu raio (R).
A fórmula para calcular o volume é: (4/3) * pi * R3.
Considere (atribua) para pi o valor 3.14159 */

float volumeEsfera, raio, pi, raioCubo;

    printf("\n Insira o valor do raio: ");
    scanf("\n %f", &raio);

    pi = 3.14159;
    raioCubo = raio * raio * raio;

    volumeEsfera = (4.0/3.0) * pi * raioCubo;
    printf("\n O volume da esfera = %.2f", volumeEsfera);

    return 0;

}
