#include <stdio.h> // printf
#include <stdlib.h> // rand
#include <time.h>
int sorteio() {
    srand(time(0)); //semente
    int menor= 1328, maior = 1360;
    int y= menor+ rand()%(maior-menor+1);
    return y;
}

int main(){
    int n, cont=0;
    printf("Entre com um numero divisor de 8192:");
    scanf("%d",&n);
    if(8192%n) printf("nao e' divisor.");
    else{
        printf("e' divisor");
        cont++;
    }


    return 0;
}
