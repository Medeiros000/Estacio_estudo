#include <stdio.h>

int main(){

    // Inicializando Matriz
    int matriz[5][5];

    // FOR para receber 0 ou 1
    for (int linha = 0; linha < 5; linha++){
        for (int coluna = 0; coluna < 5; coluna++){
            if(linha == coluna)
                printf("0 ");
                else
                    printf("1 ");
        }
        printf("\n");
    }
}