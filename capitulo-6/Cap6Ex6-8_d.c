/*Determine e imprima o menor e o maior valor contidos em um array de ponto
flutuante w com 9 elementos.*/

#include <stdio.h>
#include <stdlib.h>
#define TAM 9


float main()
{
    float ar[TAM] = {6.1, 2.2, 5.3, 8.4, 5.5, 4.6, 7.7, 1.8, 9.9};
    int i, j;
    float aux =0;

    /*Estrutura para imprimi-los*/
    for(i = 0 ; i<TAM ; i++)
    {
        printf("Array[%d] = %0.2f\n",i, ar[i]);
    }

    /*Estrutura para ordena-los*/
    for(j=1; j < TAM; j++ )
    {
        for(i = 0; i<TAM-1; i++)
        {
            if(ar[i]>ar[i+1])
            {
                aux = ar[i];
                ar[i]=ar[i+1];
                ar[i+1]=aux;

            }
        }
    } 

    printf("\n Elementos do array em ordem crescente:\n");
        for(i = 0; i<TAM ;i++){
            printf("%0.1f ", ar[i]);
        }
        printf("\n");

    /*Menor e maior valor*/
    printf("\n Menor Valor: %0.1f", ar[0]);   
    printf("\n Maior Valor: %0.1f", ar[8]);

    return 0; 
}