#include <stdio.h>
#include <stdlib.h>

int main()
{
    int q = 50000;
    int i, aux, v[q];
    FILE *pont;
    pont = fopen("sla.txt", "r");

    // ler
    for (i = 0; i < q; i++)
    {
        fscanf(pont, "%d", &v[i]);
       
    }
    fclose(pont);

    int troca;
    int j=0;

    
    // ordenar
    do
    {
        troca = 0;
        for (i = 0; i < q -1 -j; i++)
        {
            if (v[i] > v[i + 1])
            {
                aux = v[i + 1];
                v[i + 1] = v[i];
                v[i] = aux;
                troca = 1;
            }
        }
        j++;
    } while (troca == 1);
    pont = fopen("sla.txt","w");
    // mostrar
    for (i = 0; i < q; i++)
    {
        fprintf(pont,"%d\n", v[i]);
    }
fclose(pont);

    return 0;
}