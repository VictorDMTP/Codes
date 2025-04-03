#include<stdio.h>

int main ()
{ int n1 , n2 ,media;
    printf("Escolha um numero: ");
    scanf("%d", &n1);

    printf("escolha outro numero: ");
    scanf("%d",&n2);

    media = (n1+n2)/2;
    printf("a media é %i", media);
    return 0;
}