#include<stdio.h>
#include<stdlib.h>

int main() {
    int *p;
    p = (int *) malloc(sizeof(int));
    *p = 1000;
    printf("%d\n", *p);
    free(p);
    p = NULL; // Opcional

    system("pause");
    return 0;
}