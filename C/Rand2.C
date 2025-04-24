#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int q = 50000;
    int i = 0,valor[q];
//cria ponteiro para arquivo
//abre o arquivo com a permisão "a"
FILE *pont;
pont = fopen("sla.txt","a");
srand(time(NULL));
//gera 50000 valor aleatorios dentro do vetor(array) valor
//printa cada um deles dentro do arquivo que foi aberto
for (; i < q; i++) {
    valor[i] = {rand() % 100000};
    fprintf(pont,"%d\n",valor[i]);
} 
fclose(pont);
    return 0;
}