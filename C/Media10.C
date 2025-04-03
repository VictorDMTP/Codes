#include <stdio.h>

int main() {
    int i;
    float numero, soma = 0.0, media;

    // Entrada dos 10 números
    for(i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%f", &numero);
        soma += numero;
    }
    media = soma / 10;
    printf("A média dos 10 números é: %f", media);

    return 0;
}