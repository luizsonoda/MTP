#include<stdio.h>
#include<stdlib.h>

typedef unsigned char byte;
typedef unsigned short int word;
typedef unsigned int dword;
typedef struct stpixel { byte B; byte G; byte R; } pixel;
typedef struct stheaderBMP24bpp {
    byte char1; byte char2;
    dword tamanho_arquivo;
    word infores1; word infores2;
    dword offset;
    dword tam_cabecalho;
} headerBMP24bpp;

void printheader(headerBMP24bpp header){
    printf("origem: %c%c\n", header.char1, header.char2);
    printf("tamanho arquivo: %u bytes\n", header.tamanho_arquivo);
    printf("offset: %u bytes\n", header.offset);
    printf("tamanho cabecalho : %u bytes\n ", header.tam_cabecalho);

}
pixel * carregar_imagem (const char * nomearq, headerBMP24bpp * pheader){
    pixel * imagem = NULL;
    FILE * arq;
    arq = fopen(nomearq, "rb");
    fread(pheader, sizeof(headerBMP24bpp), 1, arq);
    fclose(arq);
    return imagem;
}
int main(){
    pixel * imagem = NULL;
    headerBMP24bpp header;
    carregar_imagem("imagem.bmp", &header);
    printheader(header);
    return EXIT_SUCCESS;
}
