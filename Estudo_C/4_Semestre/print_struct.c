#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>   

void options(int opcao);

typedef struct Aluno
{
    char nome[30];
    int matricula;
    float nota;
} Aluno;

static int q_alunos = 0;
int capacidade = 5;

static int n_aluno = 0;

typedef struct Sala
{
    Aluno alunos[50];
} Sala;

void print_aluno(Aluno aluno_regular)
{
    printf("\nNome: %s", aluno_regular.nome);
    printf("\nMatricula: %d", aluno_regular.matricula);
    printf("\nNota: %.2f\n", aluno_regular.nota);
}

bool is_alpha(char *str)
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (!isalpha(str[i]))
        {
            return false;
        }
    }
    return true;
}

bool is_float(const char *str) {
    float valor;
    return sscanf(str, "%f", &valor) == 1;
}

void cadastra_aluno(Aluno *alunos)
{
    if (q_alunos == capacidade)
    {
        printf("Sala cheia\n");
        return;
    }

    char nome_a[30];
    float nota_a;
    printf("Digite o nome do aluno:\n ");
    scanf("%s", nome_a);

    strcpy(alunos[n_aluno].nome, nome_a);
    alunos[n_aluno].matricula = n_aluno + 1;

    printf("Digite a nota do aluno:\n ");
    scanf("%f", &nota_a);
    
    alunos[n_aluno].nota = nota_a;
    system("cls");
    printf("\nAluno cadastrado com sucesso\n");
    print_aluno(alunos[n_aluno]);
    printf("\n");
    n_aluno++;
    q_alunos++;
    system("pause");
    system("cls");
}

Sala sala;

void menu()
{
    int opcao;
    printf("\nMenu da Sala\n");
    printf("1 - Cadastrar Aluno\n");
    printf("2 - Listar Alunos\n");
    printf("9 - Sair\n");
    scanf("%d", &opcao);
    options(opcao);
}

void listar_alunos()
{
    for (int i = 0; i < q_alunos; i++)
    {
        print_aluno(sala.alunos[i]);
    }
}

void options(int opcao)
{
    switch (opcao)
    {
    case 1:
        system("cls");
        printf("\nCadastrar Aluno\n");
        cadastra_aluno(sala.alunos);
        menu();
        break;
    case 2:
        system("cls");
        printf("\nListando %d Alunos\n", n_aluno);
        listar_alunos();
        printf("\n");
        system("pause");
        system("cls");
        menu();
        break;
    case 9:
        system("cls");
        printf("\nEncerrando o sistema\n");
        break;
    default:
        system("cls");
        printf("\nOpcao Invalida\n");
        system("pause");
        system("cls");
        menu();
        break;
    }
}

int main()
{
    system("cls");
    menu();
    system("pause");
    return 0;
}