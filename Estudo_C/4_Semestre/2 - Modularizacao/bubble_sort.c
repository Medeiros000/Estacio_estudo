#include <stdio.h>

int main()
{

    int vetor[10] = {4, 6, 2, 1, 9, 8, 3, 7, 5, 10};
    int length = sizeof(vetor) / sizeof(vetor[0]);
    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (vetor[i] > vetor[j])
            {
                int aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
    printf("Vetor ordenado: ");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", vetor[i]);
    }
}