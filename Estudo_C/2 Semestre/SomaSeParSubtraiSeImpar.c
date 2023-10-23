#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, resultado;
    do
    {
        printf ("\nDigite um número: ");
        scanf("%d",&num);

        if (num!=0){
            if (num%2==0){
                resultado = num + 1;
                printf ("\n%d e par, o resultado e = %d",num,resultado);
            } else {
                resultado = num - 1;
                printf ("\n%d e impar, o resultado e = %d",num,resultado);
            }
        }
        
    } while (num!=0);
}    