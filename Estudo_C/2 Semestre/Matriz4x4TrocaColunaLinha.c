#include <stdio.h>

int main(){

    // Matriz lançada pela Prática 2
    // int matLida[4][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};

    // Inicializando as Matrizes    
    int matLida[4][4];
    int mAlterada[4][4];

    // FOR para receber os valores da Matriz pelo teclado
    for (int linha = 0; linha < 4; linha++){
        for (int coluna = 0; coluna < 4; coluna++){
            printf("Digite o valor para linha %d e coluna %d: ", linha,coluna);
            scanf("%d", &matLida[linha][coluna]);
            mAlterada[coluna][linha] = matLida[linha][coluna];         
        }
    }
    // Imprimir a Matriz Lida
    for (int linha = 0; linha < 4; linha++){
        for (int coluna = 0; coluna < 4; coluna++){
            printf("%d ", matLida[linha][coluna]);
        }
        printf("\n");
    }
    // Imprimir a Matriz Alterada
    for (int linha = 0; linha < 4; linha++){
        for (int coluna = 0; coluna < 4; coluna++){
            printf("%d ", mAlterada[linha][coluna]);
        }
        printf("\n");
    }
    

}