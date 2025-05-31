#include <stdio.h>

int H, M, S, parcial;
int main()
{
    scanf("%d", &S);
    if (S < 60)
    {
        printf("0:0:%d\n", S);
    }
    else if (S >= 60 && S < 3600)
    {
        M = S / 60;
        S = S % 60;
        printf("0:%d:%d\n", M, S);
    }
    else if (S > 3600)
    {
        parcial = S / 60;
        H = S / 3600;
        M = parcial % 60;
        S = S % 60;
        printf("%d:%d:%d\n", H, M, S);
        return 0;
    }
}
