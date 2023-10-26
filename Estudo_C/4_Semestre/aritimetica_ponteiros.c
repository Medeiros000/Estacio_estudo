#include<stdio.h>

int x = 100;

int y = 200;

int z = 300;

int *pt = &x;

int main(){

    pt++;

    printf("pt = %d\n", *pt);

    pt--;

    printf("pt = %d\n", *pt);

    
}