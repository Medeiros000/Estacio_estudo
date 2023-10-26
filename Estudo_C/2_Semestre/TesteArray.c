#include <stdio.h>
#include <stdlib.h>

int main(){
    // Array para guardar 10 numeros na ordem que forem digitados
    int numeros[10]={10,56,78,90,12,91,23,42,90,58};
    
    // Array para guardar 10 numeros na ordem inversa que forem digitados
    int nI[10];

    //Variável para controle do laço
    int contador;

    // FOR para adicionar cada número digitado no array inverso
    for (contador=0;contador<10;contador++){
        nI[contador]=numeros[9-contador];
    }
    // Imprimindo os números digitados
    printf("\nOs numeros digitados foram: ");
    int n;
    for (n=0;n<10;n++){
        printf("%d ",numeros[n]);
    }

    // Imprimindo os números digitados na ordem inversa
    printf("\nA ordem inversa dos numeros digitados e: ");
    int i;
    for (i=0;i<10;i++){
        printf("%d ",nI[i]);
    }
}