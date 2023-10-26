#include <stdio.h>

int main(){

    // Quantidade de numeros que o vetor vai guardar
    int quantidade = 50;

    // Variavel Vetor para guardar numeros do input do usuario
    int vetorEntrada[quantidade];
    // Variavel Vetor para guardar numeros após o filtro
    int vetorSaida[quantidade];

    // FOR para ler os numeros do usuario
    for (int i = 0; i < quantidade; i++){
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &vetorEntrada[i]);
        if (vetorEntrada[i] % 2 == 0)
            vetorSaida[i] = vetorEntrada[i] + 1;
            else
                vetorSaida[i] = vetorEntrada[i] - 1;
        }
    // FOR para Imprimir o vetor de Entrada
    printf("\nOs valores digitados foram: ");
    for (int i = 0; i < quantidade; i++){
        printf(" %d", vetorEntrada[i]);
    }
    // For para Imprimir o vetor de Saida apos o filtro
    printf("\nOs valores apos o filtro: ");
    for (int i = 0; i < quantidade; i++){
        printf(" %d", vetorSaida[i]);
    }        

}