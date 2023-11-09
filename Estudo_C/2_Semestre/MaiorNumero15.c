#include <stdio.h>

int main()
{
    int cont, numero, maior;

    for (cont = 1; cont <= 15; cont = cont + 1)
    {
        printf("Digite o %d° numero : ", cont);
        scanf("%d", &numero);
        if (numero > maior)
        {
            maior = numero;
        }
    }
    printf("O maior numero digitado foi %d", maior);
}