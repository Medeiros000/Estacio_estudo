#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Objeto
{
    char nome[30]; // nome do objeto
} Objeto;

typedef struct Caixa
{
    Objeto *objeto[5]; // ponteiro para um vetor de objetos
} Caixa;

#define tamanho(x) (sizeof((Caixa)) / sizeof(Objeto))

int main()
{
    system("cls");                          // Limpa a tela
    
    Caixa caixa;                            //  Instancia a caixa

    Objeto objeto0;                         // Instancia o objeto0
    caixa.objeto[0] = &objeto0;             // Atribui o endereço de objeto0 ao ponteiro objeto[0]

    Objeto objeto1;
    caixa.objeto[1] = &objeto1;             // Atribui o endereço de objeto1 ao ponteiro objeto[1]
    strcpy(caixa.objeto[1]->nome, "lápis"); // Copia o valor "lápis" para o ponteiro objeto[1]->nome

    Objeto objeto2 = {"borracha"};          // Instancia o objeto2 e atribui o valor "borracha"
    caixa.objeto[2] = &objeto2;             // Atribui o endereço de objeto2 ao ponteiro objeto[2]

    Objeto objeto3 = {"caderno"};           // Instancia o objeto3 e atribui o valor "caderno"
    caixa.objeto[3] = &objeto3;             // Atribui o endereço de objeto3 ao ponteiro objeto[3]

    Objeto objeto4 = {"livro"};             // Instancia o objeto4 e atribui o valor "livro"
    caixa.objeto[4] = &objeto4;             // Atribui o endereço de objeto4 ao ponteiro objeto[4]

    printf("Digite o nome do objeto: ");    // Pede o nome do objeto
    scanf("%s", caixa.objeto[0]->nome);     // Lê o nome do objeto e atribui ao ponteiro objeto[0]->nome

    printf("Dentro da caixa tem: \n");      // Imprime o que tem dentro da caixa
    for (int i = 0; i < 5; i++)
    {
        if (caixa.objeto[i]->nome != NULL)  // Se o ponteiro objeto[i]->nome for diferente de NULL
        {
            printf("%s\n", caixa.objeto[i]->nome);
        }
    }

    return 0;
}