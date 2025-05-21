#include <stdio.h>

int main()
{
    int codigo1, pecas1, codigo2, pecas2;
    double vunit1, vunit2, tot;
    scanf("%d %d %lf", &codigo1, &pecas1, &vunit1);
    scanf("%d %d %lf", &codigo2, &pecas2, &vunit2);
    tot = (pecas1 * vunit1) + (pecas2 * vunit2);
    printf("VALOR A PAGAR: R$ %.2f\n", tot);
    return 0;
}