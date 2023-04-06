#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    do
    {
        printf ("Digite um número: ");
        scanf("%d",&num);

        if (num!=0)
            printf ("O número lido foi = %d\n\n ",num);        
    }
    while (num!=0);
    return 0;
}