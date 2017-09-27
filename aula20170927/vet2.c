#include<stdlib.h>
#include<stdio.h>
#define N 10
int main(){
    int vet[N];
    int i, aux;
    for (i=0; i<N; i++){
        printf("digite um numero:");
        scanf("%d", &vet[i]);
    }
    for(i=0; i< N/2; i++){
            aux = vet[i];
            vet[i]=vet[N-1-i];
            vet[N-1-i]= aux;
        }

    for(i=0; i<N; i++)
        printf("%d ", vet[i]);
    return EXIT_SUCCESS;
}
