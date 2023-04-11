#include <stdio.h>

int main(){

    // Quantidade de alunos
    int qAlunos = 2;
    // Vetor Nota dos alunos prova 1, prova 2 e prova 3
    float nota1[qAlunos], nota2[qAlunos], nota3[qAlunos];
    // Media prova1, prova2 e prova3
    float mediaProva1, mediaProva2, mediaProva3;
    // Soma notas prova1, prova2 e prova3
    float somaNotasProva1 = 0, somaNotasProva2 = 0, somaNotasProva3 = 0;
    // Vetor Media de cada aluno
    float mediaAluno[qAlunos];
    // Media geral da turma
    float mediaGeralTurma;

    // FOR para ler as notas dos alunos na Prova1
    for (int i = 0; i < qAlunos; i++){
        printf("\nDigite a nota da prova 1 do %dº aluno: ", i+1);
        scanf("%f", &nota1[i]);
        somaNotasProva1 += nota1[i];
        }
    // FOR para ler as notas dos alunos na Prova2
    for (int i = 0; i < qAlunos; i++){
        printf("\nDigite a nota da prova 2 do %dº aluno: ", i+1);
        scanf("%f", &nota2[i]);
        somaNotasProva2 += nota2[i];
        }
    // FOR para ler as notas dos alunos na Prova3
    for (int i = 0; i < qAlunos; i++){
        printf("\nDigite a nota da prova 3 do %dº aluno: ", i+1);
        scanf("%f", &nota3[i]);
        somaNotasProva3 += nota3[i];
        }

    // Media de cada Prova
        mediaProva1 = somaNotasProva1 / qAlunos;
        mediaProva2 = somaNotasProva2 / qAlunos;
        mediaProva3 = somaNotasProva3 / qAlunos;

    // FOR para calcular a media de cada aluno
    for (int i = 0; i < qAlunos; i++)
        mediaAluno[i] = (nota1[i] + nota2[i] + nota3[i]) / 3;

    // Media da turma
    mediaGeralTurma = (mediaProva1 + mediaProva2 + mediaProva3) / 3;

    // Imprimir os resultados das Medias das provas
    printf("\nA media da prova 1 foi: %.2f", mediaProva1);
    printf("\nA media da prova 2 foi: %.2f", mediaProva2);
    printf("\nA media da prova 3 foi: %.2f", mediaProva3);

    // Imprimir a media de cada aluno
    for(int i =0; i < qAlunos; i++)
        printf("\nA media do %dº aluno foi: %.2f", i+1, mediaAluno[i]);

    // Imprimir a media geral da turma
    printf("\nA media geral da turma foi: %.2f", mediaGeralTurma);

}