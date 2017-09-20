#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define n 256
void main(){
    char frase[n];
    int i=0, cont=0;
    printf("Digite uma frase:\n");
    fgets(frase,n,stdin);
    for (i=0; frase[i]; i++){
        if(isalpha(frase[i]))
            cont++;
    }
    printf("%d", cont);

    return EXIT_SUCCESS;
}

