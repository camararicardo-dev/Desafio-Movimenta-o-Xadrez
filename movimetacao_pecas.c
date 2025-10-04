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

    //Imprimir movimentação da torre
    printf("Iniciar movimentação da da torre:\n");

    do{
        //Imprimir direção do movimento
        printf("Direita\n");

        //Decrementar a variavel em 1
        torre = torre -1; 

        // Loop vai funcionar enquanto torre for maior que 0
    }while(torre > 0); 
        
    //Imprimir movimentação do bispo
    printf("Iniciar movimentação do bispo:\n");

    //Loop vai funcionar enquanto bispo for maior que 0 
    for(bispo; bispo > 0; bispo = bispo -1){
        //Imprimir direção do movimento
        printf("Para Cima, Direita\n");
    }
    
    

    return 0;
}