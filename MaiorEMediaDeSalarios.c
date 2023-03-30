#include <stdio.h>

int main(){
    
    int cont;
    int salario;
    int maior, soma = 0;

    printf ("Programa para calcular a media do salario de 10 funcionarios\ne o maior salario dentre eles.\n");

    // iniciando a captura de valores
    for (cont = 1; cont <= 10; cont=cont+1){
        
        printf("Digite o salario do funcionario %d: ", cont);
        scanf("%d", &salario);

        // condicao para capturar o maior salario
        if (salario > maior){
            maior = salario;
        }
        // condicao para somar dos salarios
        soma = soma + salario;
    }
    
    printf ("\nA media do salario dos funcionarios e: %d", (soma/10));
    printf  ("\nO maior salario e: %d", maior);
}