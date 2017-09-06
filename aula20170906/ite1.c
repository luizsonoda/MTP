#include <stdio.h> // printf
int main(){
    int num, fat;
    int i;
    printf("entre com um numero:");
    scanf("%d",&num); getchar();
    fat=1;
    for(i=0; i<num; i++)
        fat= fat*(num-i);
    printf("%d! = %d\n", num, fat);
    return 0;
}
