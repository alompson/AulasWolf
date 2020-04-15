#include <stdio.h>
#include <stdlib.h>
int main(){

    int tab[5][5], lin, col, i;

    srand (time(NULL));


    for (col = 0; col < 5; col++) {
        for (lin = 0; lin < 5; lin++){
            tab[lin][col] = rand() % 100;
            printf ("%d ", tab[lin][col] );
        }
        printf ("\n");
    }
}
