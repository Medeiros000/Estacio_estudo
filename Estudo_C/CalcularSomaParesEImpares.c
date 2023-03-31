#include <stdio.h>
#include <stdlib.h>

int main(){
    
    // Declaracao de variaveis
    int cont;
    int quantidadeDeNumeros;
    int numero;
    int somaPares = 0, somaImpares = 0;

    // Enunciado do programa
    printf ("\nPrograma para calcular a soma dos numeros pares e impares de 10 numeros.\n");

    // Captura de quantidade de numeros
    printf ("Digite quantos numeros quer digitar\n");
    scanf("%d", &quantidadeDeNumeros);

    // iniciando a captura de valores
    for (cont = 1; cont <= quantidadeDeNumeros; cont++){

        // Captura de valores
        printf("Digite o numero %d: ", cont);
        scanf("%d", &numero);

        // condicao para somar dos numeros pares
        if (numero % 2 == 0){
            somaPares = somaPares + numero;
        }
        // condicao para somar dos numeros impares
        else{
            somaImpares = somaImpares + numero;
        }
    }
    
    // Imprimindo resultados
    printf ("\nA soma dos numeros pares e: %d", somaPares);
    printf  ("\nA soma dos numeros impares e: %d", somaImpares);
}