#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    // Variavel para input do usuario
    int letra[5] = {0, 0, 0, 0, 0};

    char vogais[5] = {'a', 'e', 'i', 'o', 'u'};
    // Input do usuario
    char letraInput;
        printf("Digite uma sequencia de palavras terminada em z: ");
        
    // While para ler a letra do usuario
    do{
        scanf("%c", &letraInput);
        // Switch para contar a quantidade de vezes que cada vogal apareceu
        switch(letraInput){
            case 'a':
                letra[0] += 1;
                break;
            case 'e':
                letra[1] += 1;
                break;
            case 'i':
                letra[2] += 1;
                break;
            case 'o':
                letra[3] += 1;
                break;
            case 'u':
                letra[4] += 1;
                break;
            default:
                break;
        }
    } while (letraInput != 'z');
    // For para mostrar a quantidade de vezes que cada vogal apareceu
    for (int i = 0; i < 5; i++){
        printf("\nA letra %c apareceu %d vezes.", vogais[i], letra[i]);
    }

}