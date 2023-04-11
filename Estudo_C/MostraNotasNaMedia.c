#include <stdio.h>

int main(){

        // Variavel para guardar a quantidade de alunos
    int quantidadeAlunos=5;
    // Variavel para guardar a nota dos alunos
    int nota[quantidadeAlunos];
    // Variavel mediaSoma para guardar a soma das notas
    int mediaSoma=0, mediaTurma;
    // Variavel para controle do laço de repetição
    int i;

    // Laço de repetição para ler as notas dos alunos
    for (i = 0; i < quantidadeAlunos; i++){
        printf("Digite a nota do %dº aluno: ", i+1);
        scanf("%d", &nota[i]);
        mediaSoma = mediaSoma + nota[i];
    }
    mediaTurma = mediaSoma / quantidadeAlunos;
    // For para mostrar as notas dos alunos que estão acima da media
    for (i = 0; i < quantidadeAlunos; i++)
        if (nota[i] > mediaTurma)
            printf("\nO aluno %d tirou nota %d e está acima da média da turma que é %d.", i+1, nota[i], mediaTurma);
            else
                printf("\nO aluno %d tirou nota %d e está abaixo da média da turma que é %d.", i+1, nota[i], mediaTurma);

}