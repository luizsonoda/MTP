#include <stdio.h>
int main(){
    int b, p, i;
    int r=1;
    printf("digite a base:");
    scanf("%d", &b);
    printf("digite a potencia:");
    scanf("%d", &p);
    for(i=0; i<p; i++){
        r= r*b;
    }
    printf(" a potencia e' %d\n", r);
    return 0;
}
