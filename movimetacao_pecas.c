#include <stdio.h>
 
//Variaveis para receber quantidade de movimentações das peças
int rainha=8,bispo=5,torre =5;

//Variavel para receber movimentação do cavalo
int cavalo=4;

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
    
                                                //Imprimir movimentação do cavalo
                                                printf("Iniciar movimentação do cavalo:\n");
                                                
                                                //Loop para controlar o movimento do cavalo
                                                //Valor é decrementado na própria condição do loop
                                                while(cavalo --){

                                                    for (int i = 0; i < 2; i++)
                                                    {
                                                        //Imprimir direção do primeiro movimento 
                                                        printf("Para Cima\n");
                                                    }
                                                        //Imprimir direção do segundo movimento
                                                        printf("Para Direita\n");

                                                }

    return 0;
}