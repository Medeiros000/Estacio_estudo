#include <stdio.h>
#include <stdlib.h>

int main(){

    int cont;
    float nota1, nota2, nota3;
    float media;

    printf ("Programa para calcular a media de 40 alunos.\n");

    for (cont=1;cont<=40;cont=cont+1) {
        printf ("Digite a nota 1 do aluno %d: ", cont);
        scanf ("%f", &nota1);
        printf ("Digite a nota 2 do aluno %d: ", cont);
        scanf ("%f", &nota2);
        printf ("Digite a nota 3 do aluno %d: ", cont);
        scanf ("%f", &nota3);

        media = (nota1 + nota2 + nota3) / 3;

        if (media>=7){
            printf ("O aluno %d foi aprovado. Sua media %f",cont, media);  
        } else {
            printf ("O aluno %d foi reprovado. Sua media %f",cont, media);
        }            
    }
    return 0;
}