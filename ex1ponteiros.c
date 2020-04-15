#include <stdio.h>

void trocadevalor (int *a, int *b);

int main(){
    int a, b;
    printf("coloque os valores a serem trocados de posicao: ");
    scanf ("%d%d", &a, &b);
    trocadevalor(&a, &b);
    printf(" agora 'a' vale %d e 'b' vale %d", a, b);
}

void trocadevalor (int *a, int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}
