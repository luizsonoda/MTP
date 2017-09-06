#include <stdio.h> // printf
int main(){
    int num;
    int i;
    printf("entre com um numero:");
    scanf("%d",&num); getchar();
    for(i=2; i<num; i++){
        if(num%i==0){
            break;
        }
    }
    if(i== num)
        printf("primo!\n");
    else
        printf("nao e' primo!!\n");
    return 0;
}
