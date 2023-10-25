#include <stdio.h>

// Protótipos das funções
void milhar(int number);
void milharSemE(int number);
void centena(int number);
void dezena(int number);
void dezenaUm(int number);
void dezenaSemE(int number);
void unidade(int number);

int main() {
    int numero;
    int digitos[10]; // Supomos que o número tenha no máximo 10 dígitos
    int num_digitos = 0;

    printf("Digite o número a ser convertido em extenso: ");
    scanf("%d", &numero);

    int temp = numero; // Copia do número para manter o valor original

    // Separando os dígitos do número
    while (temp > 0) {
        int digito = temp % 10; // Obtém o último dígito
        digitos[num_digitos] = digito; // Armazena o dígito na lista
        num_digitos++; // Incrementa o número de dígitos na lista
        temp /= 10; // Remove o último dígito do número
    }

    if (num_digitos == 4) {
        if (digitos[2] != 0) {
            milharSemE(digitos[3]);
            centena(digitos[2]);
        } else {
            milhar(digitos[3]);
            centena(digitos[2]);
        }
        if (digitos[1] == 1) {
            dezenaUm(numero % 100);
        } else if (digitos[0] == 0) {
            dezenaSemE(digitos[1]);
        } else {
            dezena(digitos[1]);
            unidade(digitos[0]);
        }
    } else if (num_digitos == 3) {
        centena(digitos[2]);
        if (digitos[1] == 1) {
            dezenaUm(numero % 100);
        } else if (digitos[0] == 0) {
            dezenaSemE(digitos[1]);
        } else {
            dezena(digitos[1]);
            unidade(digitos[0]);
        }
    } else if (num_digitos == 2) {
        if (digitos[1] == 1) {
            dezenaUm(numero);
        } else if (digitos[0] == 0) {
            dezenaSemE(digitos[1]);
        } else {
            dezena(digitos[1]);
            unidade(digitos[0]);
        }
    } else if (num_digitos == 1) {
        unidade(digitos[0]);
    } else {
        if (numero == 0) {
            unidade(numero);
        } else {
            printf("Número inválido");
        }
    }

    return 0;
}

void milhar(int number) {
    switch (number) {
        case 0:
            break;
        case 1:
            printf("mil e ");
            break;
        case 2:
            printf("dois mil e ");
            break;
        case 3:
            printf("três mil e ");
            break;
        case 4:
            printf("quatro mil e ");
            break;
        case 5:
            printf("cinco mil e ");
            break;
        case 6:
            printf("seis mil e ");
            break;
        case 7:
            printf("sete mil e ");
            break;
        case 8:
            printf("oito mil e ");
            break;
        case 9:
            printf("nove mil e ");
            break;
        default:
            printf("Número inválido");
            break;
    }
}

void milharSemE (int number) {
    switch (number) {
        case 0:            
            break;
        case 1:
            printf("mil ");
            break;
        case 2:
            printf("dois mil ");
            break;
        case 3:
            printf("três mil ");
            break;
        case 4:
            printf("quatro mil ");
            break;
        case 5:
            printf("cinco mil ");
            break;
        case 6:
            printf("seis mil ");
            break;
        case 7:
            printf("sete mil ");
            break;
        case 8:
            printf("oito mil ");
            break;
        case 9:
            printf("nove mil ");
            break;
        default:
            printf("Número inválido");
            break;
    }
}

void centena(int number) {
    switch (number) {
        case 0:
            break;
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

void dezena(int number) {
    switch (number) {
        case 0:
            break;
        case 1:
            printf("dez e ");
            break;
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
}

void dezenaSemE(int number) {
    switch (number) {
        case 0:
            break;
        case 1:
            printf("dez ");
            break;
        case 2:
            printf("vinte ");
            break;
        case 3:
            printf("trinta ");
            break;
        case 4:
            printf("quarenta ");
            break;
        case 5:
            printf("cinquenta ");
            break;
        case 6:
            printf("sessenta ");
            break;
        case 7:
            printf("setenta ");
            break;
        case 8:
            printf("oitenta ");
            break;
        case 9:
            printf("noventa ");
            break;
        default:
            printf("Número inválido");
            break;
    }
}

void dezenaUm(int number) {
    switch (number) {
        case 10:
            printf("dez");
            break;
        case 11:
            printf("onze");
            break;
        case 12:
            printf("doze");
            break;
        case 13:
            printf("treze");
            break;
        case 14:
            printf("quatorze");
            break;
        case 15:
            printf("quinze");
            break;
        case 16:
            printf("dezesseis");
            break;
        case 17:
            printf("dezessete");
            break;
        case 18:
            printf("dezoito");
            break;
        case 19:
            printf("dezenove");
            break;
        default:
            printf("Número inválido");
            break;
    }
}

void unidade(int number) {
    switch (number) {
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
