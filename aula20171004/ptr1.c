#include<stdio.h>
#include<stdlib.h>
int main() {
    unsigned int dado = 0xfaca8421;
    unsigned char *ponteiro; //PONTEIRO PARA BYTE
    int i;
    printf("end. %p; dado em decimal(unsigned): %u\n",
            &dado, dado);
    ponteiro = (unsigned char *) &dado;
    for(i=0; i<sizeof(dado); i++)
        printf("end.%p => %u (decimal), %x (hexadecimal)\n",
               ponteiro+i, *(ponteiro+i), ponteiro[i]);

    return EXIT_SUCCESS;
}

