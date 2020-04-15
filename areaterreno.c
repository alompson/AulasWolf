#include <stdio.h>
#include <math.h>

int main(){

    int a, b, porcent, lado;
    double area;
    scanf ("%d%d%d", &a, &b, &porcent);
    while (a != 0){
        area = ((a * b * 100.0) / porcent);
        lado = sqrt(area);
        printf ("%d\n", lado);
        scanf ("%d%d%d", &a, &b, &porcent);
    }
    return(0);
}
