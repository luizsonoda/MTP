#include<stdio.h>
#include<stdlib.h>
#include "matriz.h"

int main() {
    Matriz A, invA;
    int ordem;
    printf("entre com a ordem da matriz");
    scanf("%d", &ordem);
    A = criarMatriz(ordem, ordem);
    preencherMatriz(A);
    imprimirMatriz(A);
    invA = inversa(A);
    printf("Matriz inversa:");
    imprimirMatriz(invA);
    destruirMatriz(A);
    destruirMatriz(invA);
    return EXIT_SUCCESS;
}

