/*Escreva instruções simples que realizem cada uma das operações seguintes em um
array unidimensional:
b) Adicione 1 a cada um dos 15 elementos do array inteiro bonus.
*/

#include <stdio.h>
#include <stdlib.h>
#define TAM 15

int main() 
{
    int bonus[TAM]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int i; 

    /*Arrays sem adcionar 1*/
    for(i = 0 ; i<TAM; i++)
    {
        printf("Sembonus[%d] = %d\n", i, bonus[i]); 
    } 
    printf("\n");
    for(i = 0 ; i<TAM; i++)
    {
        printf("bonus[%d] = %d\n", i, bonus[i]+1); 
    } 
return 0 ;  
}