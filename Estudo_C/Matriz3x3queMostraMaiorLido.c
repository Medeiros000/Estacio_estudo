#include <stdio.h>

int main(){

    // Valor para capturar o maior numero da Matriz
    int maior = 0;

    // Inicializando as Matrizes    
    int matriz[3][3];

    // FOR para receber os valores da Matriz pelo teclado
    for (int linha = 0; linha < 3; linha++){
        for (int coluna = 0; coluna < 3; coluna++){
            printf("Digite o valor para linha %d e coluna %d: ", linha,coluna);
            scanf("%d", &matriz[linha][coluna]);
            if (matriz[linha][coluna] > maior){
                maior = matriz[linha][coluna];
            }
        }
    }
    // Imprimir a Matriz Lida
    for (int linha = 0; linha < 3; linha++){
        for (int coluna = 0; coluna < 3; coluna++){
            if(matriz[linha][coluna] >= maior)
            printf("\nO numero %d na linha %d e coluna %d ", matriz[linha][coluna], linha, coluna);
        }
    }  

}