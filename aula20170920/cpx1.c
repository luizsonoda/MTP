#include<stdio.h>
#include<stdlib.h>
#include<complex.h>
#include<math.h>

double complex fazcomplexo(double a, double b, char c){
    if(c=='r'|| c=='R')
        return a + I * b ;
    else
        return a*cos(b) + I * a*sin(b);
}
double complex mostracomplexo(double complex z, char c){
    if(c=='r' || c=='R')
        printf("%lf + I * %lf\n", creal(z), cimag(z));
    else
        printf("%lf/ %lf\n", cabs(z), carg(z));
}
int main(){
    double complex z1, z2;
    double a, b ;
    printf("entre com o numero complexo z1(real, imaginario):");
    scanf("%lf,%lf", &a, &b); z1= fazcomplexo(a,b,'r');
    printf("entre com o numero complexo z2(real, imaginario):");
    scanf("%lf,%lf", &a, &b); z2= fazcomplexo(a,b,'r');
    printf("a soma : \n");
    printf("fomra retangular:"); mostracomplexo(z1+z2,'r');
    printf("fomra polar:"); mostracomplexo(z1+z2,'p');
    return EXIT_SUCCESS;
}
