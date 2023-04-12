#include <stdio.h>

int main(){

    // Matriz lançada pela Prática 2
    // int matriz[4][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};

    // Inicializando a Matriz
    int matriz[4][4];

    // FOR para receber os valores da Matriz pelo teclado
    for (int linha = 0; linha < 4; linha++){
        for (int coluna = 0; coluna < 4; coluna++){
            printf("Digite o valor para linha %d e coluna %d: ", linha,coluna);
            scanf("%d", &matriz[linha][coluna]);
            // IF para Zerar a diagonal principal
            if (linha == coluna)
                matriz[linha][coluna] = 0;            
        }
    }
    // Imprimir a Matriz com a diagonal principal zerada
    for (int linha = 0; linha < 4; linha++){
        for (int coluna = 0; coluna < 4; coluna++){
            printf("%d ", matriz[linha][coluna]);
        }
        printf("\n");
    }
    

}