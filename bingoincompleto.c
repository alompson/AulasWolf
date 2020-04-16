#include <stdio.h>
#include <stdlib.h>


int main()
{

    int tab[5][5], lin, col;

    srand (time(NULL));


    for (lin = 0; lin < 5; lin++)
    {
        for (col = 0; col < 5; col++)
        {
            tab[lin][col] = rand() % 100;


            for (int i = 4; i >= 0 && i != lin; i--)
            {
                for (int j = 4; j >= 0 && j!= col; j--)
                {
                    if (tab[lin][col] == tab[i][j])
                    //vai comparar tab[lin][col] com a tabela toda menos com ele mesmo, até com os valores que ainda nao foram definidos
                    {

                        if (tab[lin][col] == 0)
                        //para nao ter valores negativos
                        {
                            tab[lin][col] ++;
                        }
                        else if (tab[lin][col] == 99)
                        //para nao ter numeros > 99
                        {
                            tab[lin][col] --;
                        }
                        else
                        {
                            tab[lin][col] ++;
                        }
                    }
                }
            }
            if (tab[lin][col] < 10)
            //para que a formatacao fique coerente
            {
                printf ("%d   ", tab[lin][col]);
            }
            else
            {
                printf ("%d  ", tab[lin][col]);
            }
        }
        printf("\n");
    }
}
