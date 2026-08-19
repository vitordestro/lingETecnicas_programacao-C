#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[]) {
	
    float x1, y1, x2, y2, distancia;
    
    printf("Insira o valor de x1 e y1: ");
    scanf("%f %f", &x1, &y1);
    
    printf("Insira o valor de x2 e y2: ");
    scanf("%f  %f", &x2, &y2);
    

    distancia = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
    
    printf("\n A distancia entre o plano cartesiano 1 e 2, eh --> %.2f", distancia);
    
    return 0;
}
