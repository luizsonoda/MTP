#include <stdio.h> // printf
#include <stdlib.h> // rand
#include <time.h>
int main(){
    float ladoquadrado, areaquadrado;
    printf("Entre com o lado do quadrado: ");
    scanf("%f", &ladoquadrado);
    areaquadrado= ladoquadrado*ladoquadrado;
    printf("A area do quadrado e': %.3f\n",areaquadrado);
    return 0;
}
