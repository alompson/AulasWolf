#include <stdio.h>
#include <math.h>
int distplan (int xa, int ya, int xb, int yb);

int main()
{
    int dista, xa, xb, ya, yb;
    printf("insira as coordenadas dos pontos para calcular\n a distancia(insira no formato x1 y1 x2 y2)\n");
    scanf ("%d %d %d %d", &xa, &ya, &xb, &yb);
    dista = distplan(xa, ya, xb, yb);
    printf ("a distancia é: %d cm", dista);
    return (0);
}

int distplan (int xa, int ya, int xb, int yb)
{
    int dist;
    dist = sqrt((xa-xb)*(xa-xb) + (ya-yb)*(ya-yb));
    return(dist);
}

