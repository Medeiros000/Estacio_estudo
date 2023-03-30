#include <stdio.h>

int main(){
    int cont;
    double numero, salarioTotal = 0;

    printf ("Programa para dar a media do salario de 10 funcionarios.\n");

        for (cont=1;cont<=10;cont=cont+1) {
            printf ("Digite o salario do funcionario %d: ", cont);
            scanf ("%d", &numero);

            salarioTotal = salarioTotal + numero;

            // verificacao da soma
            printf ("%d\n", salarioTotal);
        }

    printf ("A media do salario dos funcionarios e: %d", (salarioTotal/10));
}