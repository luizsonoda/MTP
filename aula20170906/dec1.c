#include <stdio.h> // printf
int main(){
    int n;
    printf("Entre com um numero:");
    scanf("%d",&n);
    if(n%2){ // impar
        printf("impar.\n");
        if(n%5==0) printf("numero mult. de 5.");
    }
    else{
        printf("par.\n");
        if(n%3==0) printf("numero mult. de 3.");
        if(n%7==0) printf("numero mult. de 7.");
    }
    return 0;
}
