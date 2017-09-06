#include <stdio.h> // printf
#include <stdlib.h> // rand
#include <time.h>
int main(){
    float h, b, atriangulo;
    printf("Entre com a altura do triangulo: ");
    scanf("%f", &h);
    printf("Entre com a base do triangulo: ");
    scanf("%f", &b);
    atriangulo= b*h/2;
    printf("A area do triangulo e': %.3f\n",atriangulo);
    return 0;
}

