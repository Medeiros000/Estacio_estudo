#include <stdio.h>

int main()
{

    int x = 5; // variável inteira

    int *pt_x; // ponteiro para inteiro

    pt_x = &x; // ponteiro recebe o endereço de x

    *pt_x = 50; // altera o valor de x

    printf("Ponteiro a = %d\n", *pt_x); // valor do ponteiro
    printf("x = %d\n", x);              // endereço de memória do ponteiro

    // system("pause");
    return 0;
}