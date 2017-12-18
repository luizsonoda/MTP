#include <stdio.h>
#include<math.h>
#include<stdlib.h>

float media(float*numeros, int qtd){
    float m= 0.0f;
    int i;
    for(i=0; i<qtd; i++) m += numeros[i];
    m /= qtd;
    return m;
}
float desviopadrao(float *numeros, int qnt){
    float m= media(numeros,qnt);
    float dp= 0.0f;
    int i;
    for(i=0; i<qnt; i++) dp += pow(numeros[i]-m,2);
    dp /= qnt;
    return sqrt(dp);
}

int main() {
    int qnt, i;
    float *numeros;
    printf("quantos numeros ?");
    scanf("%d", &qnt);
    numeros = (float*)malloc(qnt*sizeof(float));
    for(i=0; i<qnt; i++){
        printf("entre com um %do numero: ", i+1);
        scanf("%f", numeros+i);
    }
    printf("a media e: %f\n", media(numeros, qnt));
    printf("desvio padrao e %f\n", desviopadrao(numeros, qnt));
    free(numeros);
    return 0;
}
