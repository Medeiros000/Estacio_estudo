#include <stdio.h>
#include <stdlib.h>

struct pessoa
{
    char nome[30];
    int idade;
} pai, mae, tio, irmao;

int main()
{
    struct pessoa eu = {"Jr", 41}; // Inicialização de uma struct

    printf("O %s tem %d anos.", eu.nome, eu.idade);
    return 0;
}
