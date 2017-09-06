#include <stdio.h>
int main() {
    unsigned char numpq;
    char c;
    printf("Entre com um numero entre 0 e 255: ");
    scanf("%hhu", &numpq); getchar();
    printf("Entre com uma letra: ");
    scanf("%c", &c); getchar();
    printf("Numero: %hhu, Caracter: %c (%hhd)\n",
	numpq, c ,c);
    return 0;
}
