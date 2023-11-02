#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct endereco *xptr;

struct endereco {
    char rua[30];
    char numero[10];
    char cep[10];
    char bairro[30];
};

int main(void) {

    struct endereco x;
    //   = {"Av. das Américas", "4200", "22640102", "Barra da Tijuca"};


    strcpy(x.rua, "Av. das Américas");  // strcpy(destino, origem) biblioteca string.h
    strcpy(x.numero, "4200");
    strcpy(x.cep, "22640102");
    strcpy(x.bairro, "Barra da Tijuca");

    xptr = &x;

    printf("\nValor de x.rua na struct x: %s", x.rua);
    
    printf("\nPonteiro xptr aponta para struct x.rua de valor: %s", xptr->rua);
    
    return 0;
}