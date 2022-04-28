/*c) Leia os 12 valores do array de ponto flutuante temperaturasMensais a partir do
teclado*/

#include <stdio.h>
#include <stdlib.h>
#define TAM 12

float main()
{
    float temperaturasMensaisr[12] = {}; 
    int i; 

    for(i = 0 ; i < TAM; i++)
    {
        printf("Digite a temperatura media:");
        scanf("%f", &temperaturasMensaisr[i]); 
        printf("\n"); 
    }

    for(i = 0 ; i < TAM; i++)
    {
        printf("temperatura media[%d]:%f\n",i, temperaturasMensaisr[i]);
        
    }
    return 0; 
}