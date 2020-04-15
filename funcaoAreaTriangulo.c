#include <stdio.h>

int areatri(int base, int altura);

int main (){

    int area, ba, alt;
    printf ("insira os valores de base e altura: ");
    scanf ("%d%d", &ba, &alt);
    area = areatri(ba, alt);
    printf ("A area do triangulo é: %d", area);
    return (0);
}

int areatri(int base, int altura){
    int area;
    area = base*altura/2;
    return (area);
}
