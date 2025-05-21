#include <stdio.h>

int main()
{
    int valor, i;
    // recebo o valor a ser dividido
    scanf("%d", &valor);
    // defino cada valor de cedula dentro da array
    int Notas[] = {100, 50, 20, 10, 5, 2, 1};
    // crio variavel pra Quantidade de cedulas necessarias para cada valor de nota
    int quantidade;
    printf("%d\n", valor);
    // comeco um for loop para percorrer cada i(valor dentro da array ou seja valor de cada cedula)
    // quando ele estiver no i=0 vai percorrer o primeiro valor da array(100) dividir o valor total por isso
    // o inteiro que sobrar sera dividido pelo i=1 que sera o segundo valor da array e assim por diante
    // defino oque a variavel quantidade faz = pega o valor recebido e divide pelo valor de determinada cedula dentro do array
    for (i = 0; i < 7; i++)
    {
        quantidade = valor / Notas[i];
        // o valor vai ser dividido por Notas[i] que vai dar ex= 70 e vai atribuir esse novo valor a variavel valor
        // vai ser feito valor/nota[i] de novo e vai ser atribuido o inteiro restante a "valor"
        valor %= Notas[i];
        printf("%d nota(s) de R$ %d,00\n", quantidade, Notas[i]);
    }
    return 0;
}
// fazer outro for loop para apenas serem printados as quantidades de cedulas necessarias forem > 0
// e para printar a quantidade de cada valor de cedula
//   if (quantidade > 0) {
//
//    printf ("%d nota(s) de R$ %d,00\n",quantidade,Notas[i]);
//}