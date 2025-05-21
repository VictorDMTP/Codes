#include <stdio.h>
#include <math.h>
#define pi 3.14159

int main()
{
    double A, B, C, tri, cir, tra, qua, ret;
    scanf("%lf %lf %lf", &A, &B, &C);
    tri = (A * C) / 2.0;
    printf("TRIANGULO: %.3f\n", tri);
    cir = pow(C, 2) * pi;
    printf("CIRCULO: %.3f\n", cir);
    tra = ((A + B) * C) / 2.0;
    printf("TRAPEZIO: %.3f\n", tra);
    qua = pow(B, 2);
    printf("QUADRADO: %.3f\n", qua);
    ret = A * B;
    printf("RETANGULO: %.3f\n", ret);
    return 0;
}