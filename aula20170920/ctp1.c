#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define n 256
int main(){
    char frase[n];
    int i=0;
    printf("Digite uma frase:\n");
    fgets(frase,n,stdin);
    for (i=0; frase[i]; i++){
        frase[i]= toupper(frase[i]);
    }
    printf("%s", frase);

    return EXIT_SUCCESS;

}
