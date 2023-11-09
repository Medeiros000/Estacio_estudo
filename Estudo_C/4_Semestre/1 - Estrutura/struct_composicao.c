#include <stdio.h>

struct ponto
{
    int x;
    int y;
};

struct retangulo
{
    struct ponto p1;
    struct ponto p2;
} ret;

int main()
{
    ret.p1.x = 10;
    ret.p1.y = 10;
    ret.p2.x = 50;
    ret.p2.y = 20;
    printf("P1: (%d,%d)\n", ret.p1.x, ret.p1.y);
    printf("P2: (%d,%d)\n", ret.p2.x, ret.p2.y);
    return 0;
}