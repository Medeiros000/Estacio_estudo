#include <stdio.h>

int main()
{
    int **pt2;      // ponteiro para ponteiro do tipo inteiro

    int *pt1;       // ponteiro do tipo inteiro

    int x = 10;     // variável inteira

    pt2 = &pt1;     // ponteiro recebe o endereço de pt1

    pt1 = &x;       // ponteiro recebe o endereço de x

    *pt1 = 30;      // altera o valor de x

    **pt2 = 50;     // altera o valor de x

    printf("Ponteiro p2 = %d\nPonteiro p1 = %d\nx = %d\n", **pt2, *pt1, x);
}
