#include <stdio.h>

int main(){
    int cont, numero, maior;

    printf ("Digite um numero: ");
    scanf ("%d", &numero);
    maior = numero;

        for (cont=1;cont<=14;cont=cont+1) {
            printf ("Digite um numero: ");
            scanf ("%d", &numero);
            if (numero > maior) {
                maior = numero;
            }
        }
    printf ("O maior numero digitado foi %d", maior);
}