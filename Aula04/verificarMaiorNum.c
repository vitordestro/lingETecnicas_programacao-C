#include <stdio.h>
#include <stdlib.h>

/* aula 4 */

int main() {

    int a, b, c, d, e;
    int maiorab, maiorabc, maiorabcd, maiorabcde;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    printf("Digite o terceiro numero: ");
    scanf("%d", &c);

    printf("Digite o quarto numero: ");
    scanf("%d", &d);

    printf("Digite o quinto numero: ");
    scanf("%d", &e);

    maiorab = (a + b + abs(a - b)) / 2;

    maiorabc = (maiorab + c + abs(maiorab - c)) / 2;

    maiorabcd = (maiorabc + d + abs(maiorabc - d)) / 2;

    maiorabcde = (maiorabcd + e + abs(maiorabcd - e)) / 2;

    printf("Entre %d | %d | %d | %d | %d = %d e o maior",
           a, b, c, d, e, maiorabcde);

    return 0;
}
