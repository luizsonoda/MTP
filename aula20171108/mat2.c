#include<stdio.h>
#include<stdlib.h>
#include "matriz.h"

int main() {
    Matriz A;
    int ordem;
    printf("entre com a ordem da matriz");
    scanf("%d", &ordem);
    A = criarMatriz(ordem, ordem);
    preencherMatriz(A);
    imprimirMatriz(A);
    printf("\nDeterminante: %lf\n",determinante(A));
    destruirMatriz(A);
    return EXIT_SUCCESS;
}
