#include <stdio.h>

int main(){
    int x, y, total, aux;
    printf ("digite a base e o expoente: ");
    scanf ("%d%d", &x, &y);
    total = x;
    for (int i = 1; i < y; i++){
        total = total*x;
    }
    printf("%d", total);
}
