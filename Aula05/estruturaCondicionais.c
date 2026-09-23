#include <stdio.h>
#include <stdlib.h>

int main() {

    int a, b, c, r;
    int n;

    printf("Digite tres valores respectivamente: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c) {
        r = a;
    }
    else if (b > c && b > a) {
        r = b;
    }
    else {
        r = c;
    }
  
    printf("O maior valor e: %d\n", r);

  //Descobrir paridade do numero:
  
    printf("\nDigite um numero: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("Numero par!\n");
    }
    else {
        printf("Numero impar!\n");
    }

    return 0;
}
