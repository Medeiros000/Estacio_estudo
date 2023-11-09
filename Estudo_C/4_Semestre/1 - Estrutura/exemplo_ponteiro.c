#include<stdio.h>
#include<stdlib.h>

struct endereco *xptr;

struct endereco {
    char rua[30];
    char numero[10];
    char cep[10];
    char bairro[30];
};

int main(void) {

    struct endereco x  = {"Av. das Américas", "4200", "22640102", "Barra da Tijuca"};
    xptr = &x;

    printf("\nValor de x.rua na struct x: %s", x.rua);
    
    printf("\nPonteiro xptr aponta para struct x.rua de valor: %s", xptr->rua);
    
    return 0;
}