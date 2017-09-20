#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main(){
    double a, b, angulo, resultado;
    printf("entre com os lados a, b: ");
    scanf("%f,%f", &a, &b);
    printf("angulo em radianos");
    scanf("%f", &angulo);
    resultado=sqrt((a*a)+(b*b)-((2*a*b)*cos(angulo)));
    printf("resultado : %f\n", resultado);
    return EXIT_SUCCESS;
}
