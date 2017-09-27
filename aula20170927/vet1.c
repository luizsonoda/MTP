#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 10000
void main(){
    srand(time(0));
    int vet[N];
    int n, i;
    float media=0.f;
    printf("entre com o numero maximo a ser sorteado:");
    scanf("%d", &n);
    for(i=0; i<N; i++){
        vet[i] = rand()%(n+1);
    }
    for(i=0; i<N; i++){
        media += vet[i];
    }
    media /= N;
    printf("a media e': %f", media);

    return EXIT_SUCCESS;
}
