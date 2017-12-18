#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#define N 256
int main(){
    char str[N]; char msg[2*N];
    int i;
    printf("entre com umas frase :");
    fgets(str, N, stdin); str[strlen(str)-1 ]= '\0';
    for(i=0; i<N; i++) str[i]= toupper(str[i]);
    printf("o tamanho da string e': %d\n", strlen(str));
    if(strncmp(str,"BOM DIA",7)==0)
        printf("bom dia pra voce tbm!");
    else{
        if(strncmp(str,"TCHAU",5)==0)
            printf("saindo ? que pena...");
        else{
            strcpy(msg, "voce quis dizer: ");
            strcat(msg, str);
            strcat(msg, "?");
            printf("%s", msg);
        }
    }
    return EXIT_SUCCESS;
}
