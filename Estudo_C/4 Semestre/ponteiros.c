#include <stdio.h>

int main() {

    int x = 5;

    int *pt_x;

    pt_x = &x;
 

    printf("%d\n", *pt_x);
    system("pause");
    return 0;
}