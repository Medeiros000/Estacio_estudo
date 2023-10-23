#include <stdio.h>

int main(){
    int cont, numero;

    printf ("Digite um numero: ");
    scanf ("%d", &numero);

        for (cont=1;cont<=20;cont=cont+1) {
            printf ("%d vez %d\n", cont, numero);
        }
}