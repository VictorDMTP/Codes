#include <stdio.h>
#include <math.h>

int main()
{
    double R, pi, Vol;
    scanf("%lf", &R);
    pi = 3.14159;
    Vol = (4 / 3.0) * pi * (pow(R, 3));
    printf("VOLUME = %.3f\n", Vol);
    return 0;
}