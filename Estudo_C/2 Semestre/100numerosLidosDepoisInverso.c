#include <stdio.h>

int main(){

    // Vetor da sequencia normal
    int sequenciaNormal[100];
    // Vetor da sequencia inversa
    int sequenciaInversa[100];
    // Variavel de controle do laço de repetição
    int i;
    // Variavel para controle da progessao do inverso
    int j;
    // Quantidade de numeros a serem lidos
    int quantidade= 100;

    // Laço de repetição para ler os 100 numeros
    for (i = 0; i < quantidade; i++){
        printf("Digite o %dº numero: ", i+1);
        scanf("%d", &sequenciaNormal[i]);
        j = quantidade - i - 1;
        sequenciaInversa[j] = sequenciaNormal[i];
    }
    // Variavel para impressao dos numeros
    int indice;

    // FOR para Impressao dos valores do vetor normal
    printf("\nA sequencia normal é: ");
    for (indice = 0; indice < quantidade; indice++){
        printf("%d ",sequenciaNormal[indice]);
    }
    // FOR para Impressao dos valores do vetor inverso
    printf("\nA sequencia inversa é: ");
    for (indice = 0; indice < quantidade; indice++){
        printf("%d ",sequenciaInversa[indice]);
    }

}