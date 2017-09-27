#include<stdlib.h>
#include<stdio.h>
#define N 10
void main(){
    int vet[N];
    int i, soma=0, mult=1;
    for (i=0; i<N; i++){
        printf("digite um numero:\n");
        scanf("%d", &vet[i]);
    }
    for(i=0; i<N; i++) soma= soma+vet[i];
    for(i=0; i<N; i++) mult= mult*vet[i];
    printf("soma= %d, mult= %d", soma, mult);

    return EXIT_SUCCESS;
}

