#include <stdio.h>
#include <math.h>

int mdc(int a, int b, int c){
    int resmdc;
    for (int i = a; i > 0; i--){
        if (a%i==0 && b%i==0 && c%i==0){
        resmdc = i;
        return (resmdc);
        }
    }
}

int mmc(int a, int b, int c){
    int resmmc;
    for (int i = a; i < a*b*c; i++){
        if (i%a==0 && i%b==0 && i%c==0){
            resmmc = i;
            return (resmmc);
        }
    }
}

int main(){
    int a, b, c, resmmc, resmdc;
    printf("Digite 3 numeros para mostrar o mmc e o mdc entre eles.\n");
    scanf ("%d%d%d", &a, &b, &c);
    resmmc = mmc(a, b, c);
    resmdc = mdc(a, b, c);
    printf("o mmc e o mdc são respectivamente %d e %d\n", resmmc, resmdc);

}
