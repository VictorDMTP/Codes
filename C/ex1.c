#include <stdio.h>

int main()
{
    int numero, contador = 0;
    int maior[2] = {0, 0}; // armazena os dois maiores valores

    // recebera os 10 valores
    while (contador < 10)
    {   //pede os 10 numeros e encerra com uma condicao
        printf("escolha 10 numeros inteiros positivos,0 caso queira que encerre:\n");
        scanf("%d", &numero);
        // caso seja 0 encerra
        if (numero == 0)
            break;
        // ignora negativos
        if (numero < 0)
            continue;
        // faz a troca do menor valor para o maior valor dentro do vetor
        if (numero > maior[0])
        {
            maior[1] = maior[0];
            maior[0] = numero;
        }
        else if (numero > maior[1])
        {
            maior[1] = numero;
        }
        contador++;
    }
    printf("A soma dos dos maiores numeros e '%d'\n", maior[1] + maior[0]);
        return 0;
}