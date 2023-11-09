#include <stdio.h>

struct ponto
{
    int x;
    int y;
    struct ponto *p;
};

int main()
{
    struct ponto p1 = {10, 20, NULL};
    struct ponto p2 = {30, 40, NULL};
    struct ponto p3 = {50, 60, NULL};
    p1.p = &p2;
    p2.p = &p3;

    // imprimindo os valores de p1
    printf("P1: (%d,%d)\n", p1.x, p1.y);

    // imprimindo os valores de p2 através do ponteiro p de p1
    printf("P2: (%d,%d)\n", p1.p->x, p1.p->y);

    // imprimindo os valores de p3 através do ponteiro p de p2 que o ponteiro de p1 aponta
    printf("P3: (%d,%d)\n", p1.p->p->x, p1.p->p->y);

    return 0;
}