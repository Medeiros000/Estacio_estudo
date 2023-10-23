#include <stdio.h>

int main(){

    // Quantidade de numeros no vetor
    int quantidade = 50;
    // Vetor de verificacao
    int vVerifica[10]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
    // Vetor de entrada
    int vEntrada[quantidade];

    //for para ler os numeros do usuario
    for (int i = 0; i < quantidade; i++){
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &vEntrada[i]);
    }

    for (int i = 0; i < quantidade; i++)
        for (int j = 0; j < 10; j++)
            if (vEntrada[i] == vVerifica[j])
                printf("\nO numero %d esta na posicao %d do vetor de verificacao.",vEntrada[i], j);

}