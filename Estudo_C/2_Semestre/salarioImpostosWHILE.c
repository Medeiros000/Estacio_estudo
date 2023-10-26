#include <stdio.h>
#include <stdlib.h>

int main(){
    // Variáveis globais.
    float salbruto, salliquido, imposto, totbruto, totliquido, totimposto;

    // Variável de controle do comando FOR.
    int contaFunc=1;

    // Inicialização das variáveis de controle e acumuladoras.
    totbruto = 0;
    totliquido = 0;
    totimposto = 0;

    // Início do comando WHILE
    while (contaFunc<=15){

        // Leitura do salário bruto do funcionário.
        printf("Digite o salário bruto do funcionário %d: ", contaFunc);
        scanf("%f",&salbruto);

        if (salbruto<=999)
            imposto = salbruto * 0.10;
        else    
            if (salbruto<=1999)        
                imposto = salbruto * 0.15;
            else
                if (salbruto<=9999)
                    imposto = salbruto * 0.20;
                else
                    if (salbruto<=99999)
                        imposto = salbruto * 0.25;
                    else
                        imposto = salbruto * 0.30;
                        salliquido = salbruto - imposto;
            
        printf("Salario Liquido: %.2f \n",salliquido);
        totbruto = totbruto + salbruto;
        totliquido = totliquido + salliquido;
        totimposto = totimposto + imposto;
        contaFunc++;
    }

    // Apresentação dos resultados.
    printf("Total de salários bruto: %.2f \n",totbruto);
    printf("Total de salários líquido: %.2f \n",totliquido);
    printf("Total de impostos: %.2f \n",totimposto);
}