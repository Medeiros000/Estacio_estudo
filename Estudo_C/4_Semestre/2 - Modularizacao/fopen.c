#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp = fopen("sqrt.txt", "r");
    if (fp == NULL)
    {
        printf("Erro na abertura do arquivo!\n");
        exit(1);
    }
    char ch;
    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }
}
