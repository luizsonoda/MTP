#include<stdio.h>
#include<stdlib.h>
int main() {
    int a, b, s;
    unsigned char *ponteiro;
    printf("digite dois numeros:");
    scanf("%d,%d",&a, &b);
    s= a+b;
    printf("end. de a: %p;  b: %p;  soma: %p\n ", &a, &b, &s);
    return EXIT_SUCCESS;
}

