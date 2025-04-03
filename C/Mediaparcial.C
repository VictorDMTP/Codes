#include <stdio.h> 

int main() {
    int i;
    float num, soma = 0.0, media;

    for(i = 0; i < 10; i++) {
        printf("Digite o %d número: ", i + 1);
        scanf("%f", &num);

 soma += num;

 media = soma/(i + 1);

 printf("A soma parcial: %.2f\n",soma);
 printf("A media parcial: %.2f\n",media);
}
printf("A media final foi: %.2f\n",media);
return 0;
}