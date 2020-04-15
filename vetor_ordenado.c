#include <stdio.h>

int main (){

    int vet[10], i, aux,b;
    printf ("coloque os valores em cada casa do vetor, 10 vezes.\n");

    for (i = 0; i < 10; i++){
        scanf ("%d", &vet[i]);
    }

    for (b = 1; b < 10; b++){
        for (i = 1; i < 10; i++){
            if (vet[i-1] > vet[i]){
                aux = vet[i-1];
                vet[i-1] = vet[i];
                vet[i] = aux;
                }
            }
        }

    for (i = 0; i < 10; i++){
    printf ("%d ",vet[i] );
    }
}
