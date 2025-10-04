#include <stdio.h>
 
//Variaveis para receber quantidade de movimentações das peças
int rainha=8,bispo=5,torre =5;

int main() {

    //Imprimir movimentação Rainha
    printf("Iniciar movimentação da Rainha:\n");

    //o llop vai continuar enquanto o valor for maior que 0
    while (rainha > 0)
    {
        //Imprimir direção do movimento
        printf("Esquerda\n");

        //Decrementar a variavel em 1
        rainha = rainha - 1;
    }
    

    return 0;
}