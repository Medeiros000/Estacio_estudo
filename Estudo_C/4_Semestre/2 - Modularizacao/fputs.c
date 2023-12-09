#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *fp = fopen("fputs.txt", "a");
    if (fp == NULL)
    {
        printf("Erro na abertura do arquivo!\n");
        exit(1);
    }

    char frase[100];
    printf("Digite uma frase: ");
    fgets(frase, 100, stdin);

    fputs(frase, fp);

    fclose(fp);
}