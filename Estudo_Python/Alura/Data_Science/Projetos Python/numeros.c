
#include <stdio.h>

int main() {
    int numero;
    int digitos[10]; // Supomos que o número tenha no máximo 10 dígitos
    int num_digitos = 0;

    printf("Digite o número a ser convertido em extenso: ");

    scanf("%d", &numero);



    // Separando os dígitos do número
    while (numero > 0) {
        int digito = numero % 10; // Obtém o último dígito
        digitos[num_digitos] = digito; // Armazena o dígito na lista
        num_digitos++; // Incrementa o número de dígitos na lista
        numero /= 10; // Remove o último dígito do número
    }
    // Imprimindo o número de dígitos
    printf("Número de dígitos: %d\n", num_digitos);
if ((num_digitos == 2) & (digitos[1] != 1)){
    switch (digitos[1]){
        case 2:
            printf("vinte e ");
            break;
        case 3:
            printf("trinta e ");
            break;
        case 4:
            printf("quarenta e ");
            break;
        case 5:
            printf("cinquenta e ");
            break;
        case 6:
            printf("sessenta e ");
            break;
        case 7:
            printf("setenta e ");
            break;
        case 8:
            printf("oitenta e ");
            break;
        case 9:
            printf("noventa e ");
            break;
        default:
            printf("Número inválido");
            break;
    }
    unidade(digitos[0]);
}
if ((num_digitos == 2) & (digitos[1] == 1)){
    switch (digitos[0]){
        case 0:
            printf("dez");
            break;
        case 1:
            printf("onze");
            break;
        case 2:
            printf("doze");
            break;
        case 3:
            printf("treze");
            break;
        case 4:
            printf("quatorze");
            break;  
        case 5:
            printf("quinze");
            break;
        case 6:
            printf("dezesseis");
            break;
        case 7:
            printf("dezessete");
            break;
        case 8:
            printf("dezoito");
            break;
        case 9:
            printf("dezenove");
            break;
        default:
            printf("Número inválido");
            break;
    }
}
function centena(digitos[2]) {
    switch (digitos[2]){
        case 1:
            printf("cento e ");
            break;
        case 2:
            printf("duzentos e ");
            break;
        case 3:
            printf("trezentos e ");
            break;
        case 4:
            printf("quatrocentos e ");
            break;
        case 5:
            printf("quinhentos e ");
            break;
        case 6:
            printf("seiscentos e ");
            break;
        case 7:
            printf("setecentos e ");
            break;
        case 8:
            printf("oitocentos e ");
            break;
        case 9:
            printf("novecentos e ");
            break;
        default:
            printf("Número inválido");
            break;
    }
}
function unidade(digitos[0]) {
    switch (digitos[0]){
        case 0:
            printf("zero");
            break;
        case 1:
            printf("um");
            break;
        case 2:
            printf("dois");
            break;
        case 3:
            printf("três");
            break;
        case 4:
            printf("quatro");
            break;  
        case 5:
            printf("cinco");
            break;
        case 6:
            printf("seis");
            break;
        case 7:
            printf("sete");
            break;
        case 8:
            printf("oito");
            break;
        case 9:
            printf("nove");
            break;
        default:
            printf("Número inválido");
            break;
    }
}

    // Imprimindo a lista de dígitos
    // printf("Lista de digitos: ");
    // for (int i = num_digitos - 1; i >= 0; i--) {
    //     printf("%d ", digitos[i]);
    // }

    return 0;
}