#include<stdio.h>

typedef int medida;

typedef medida altura;

altura alt = 20;

int x = 4, i;

int main() {

    i = alt / x;

    printf("%d", i);

    return 0;
}