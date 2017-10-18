#include <stdio.h>
#include <stdlib.h>

int divide(int num1, int num2, int *Q, int *R){
    *Q = num1/num2;
    *R = num1%num2;
    return 1;
}

int main(){
    int num1, num2, Q, R;
    printf("entre com dois numeros: ");
    scanf("%d,%d",&num1,&num2);
    divide(num1, num2, &Q, &R);
    printf("Resultado: %d,%d\n",Q,R);

    return  EXIT_SUCCESS;
}
