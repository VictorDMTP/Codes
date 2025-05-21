#include <stdio.h>

void ordenar(int valor[], int tamanho)
{
    int i, j, swt;
    for (i = 0; i < tamanho - 1; i++)
    {
        for (j = 0; j < tamanho - i - 1; j++)
        {
            if (valor[j] > valor[j + 1])
            {
                swt = valor[j];
                valor[j] = valor[j + 1];
                valor[j + 1] = swt;
            }
        }
    }
}

int main()
{
    int i = 0, tamanho;
    FILE *arqin, *arqout;
    int numero[100];

    arqin = fopen("arqin.txt", "r");
    if (arqin == NULL)
    {
        printf("Não foi possível abrir o arquivo de entrada\n");
        return 1;
    }

    // Correção: verificar EOF e limite do vetor
    while (i < 100 && fscanf(arqin, "%d", &numero[i]) == 1)
    {
        i++;
    }
    tamanho = i;

    ordenar(numero, tamanho);

    arqout = fopen("arqout.txt", "w");
    if (arqout == NULL)
    {
        printf("Não foi possível abrir o arquivo de saída\n");
        fclose(arqin);
        return 1;
    }


    fprintf(arqout, "Menor: %d\nMaior: %d\n", numero[0], numero[tamanho - 1]);
    
    fclose(arqin);
    fclose(arqout);
    return 0;
}