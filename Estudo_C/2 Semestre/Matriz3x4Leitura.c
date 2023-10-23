#include <stdio.h>

int main(){
    // Matriz lançada pela Prática 1
    int matriz[3][4] = {{2,9,7,3}, {8,11,3,4}, {5,4,3,1}};
    // Variável para contar os números Pares e Impares
    int contPares = 0, contImpares = 0;

    // FOR para contar os números Pares e Impares
    for (int linha = 0; linha < 3; linha++){
        for (int coluna = 0; coluna < 4; coluna++){
            if (matriz[linha][coluna] % 2 == 0)
                contPares++;
            else
                contImpares++;
        }
    }
    // Imprimir a quantidade de números Pares e Impares
    printf("\nA quantidade de numeros Pares e: %d", contPares);
    printf("\nA quantidade de numeros Impares e: %d", contImpares);

}