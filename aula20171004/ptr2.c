#include<stdio.h>
#include<stdlib.h>
int main() {
    int vetor[]={0,1,2,4,8,16,1025};
    unsigned char *ponteiro;
    int nbytes = sizeof(vetor);
    int i, cont=0;
    for (i=0, ponteiro = (unsigned char *)vetor; i < nbytes; i++){
        if(!ponteiro[i])
                cont++;
        printf("end. %p, dado: %d, %x\n", ponteiro+i, ponteiro[i], *(ponteiro+i));
    }
    printf("de %d bytes, %d estao com 0x00.\n", nbytes, cont);

    return EXIT_SUCCESS;
}

