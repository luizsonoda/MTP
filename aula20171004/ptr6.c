#include<stdio.h>
#include<stdlib.h>
#define n 16
int main() {
    char str[n];
    int *varredura = (int *) str;
    int i=0;
    for(; i<n; i++)
        str[i]= '\0';
    printf("entre com um texto de %d caracteres: \n", n-1);
    fgets(str,n,stdin);
    for(i=0; i<n/sizeof(int); i++)
        printf("end. %p => dado:%d (dec), %x(hex)\n", varredura+i, varredura[i], varredura[i]);
    printf("codigo:\n");
    for(i=0; i<n/sizeof(int); i++)
        printf("%d ", varredura [i]);

    return EXIT_SUCCESS;
}


