#include <stdio.h>
#include <stdlib.h>

int main(){

    // Iniciando as variaveis
    int numero;

    // Pedindo o numero
    printf("\nDigite o primeiro numero da sequencia: ");
    scanf("%d", &numero);

    // Laço de repetição
    while (numero > 0){

        // Imprimindo a sequencia
        printf("%d ", numero);

        // Diminuindo o numero ate chegar em 0
        numero--;
    }
    // Fim da sequencia
    printf("\nFIM DA SEQUENCIA");
}