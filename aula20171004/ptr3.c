#include<stdio.h>
#include<stdlib.h>
int main() {
    int vetor[]={0x0F,0xFF,0xFFFF,0xFFFFFF,0x80000001,0xFFFFFFFF};
    unsigned char *ponteiro;
    int nbytes = sizeof(vetor);
    int i, cont=0;
    for (i=0, ponteiro = (unsigned char *)vetor; i < nbytes; i++){
        if(ponteiro[i])
                cont++;
        printf("end. %p, dado: %d, %x\n", ponteiro+i, ponteiro[i], *(ponteiro+i));
    }
    printf("de %d bytes, %d estao com pelo menos um bit\n", nbytes, cont);

    return EXIT_SUCCESS;
}
