/*Escreva instruções simples que realizem cada uma das operações seguintes em um
array unidimensional:
a) Inicialize com zeros os 10 elementos do array inteiro contagem.*/

#include <stdio.h>
#include <stdlib.h>
#define TAM 10 

int main()
 { 
     int contagem[TAM] = {}; 
     int i, j; 

     for(i = 0 ; i<=TAM ; i++)
     {
         contagem[i] = 0; 
     }

     for(j = 0 ; j<TAM ; j++)
     {
         printf("Array[%d]=%d\n", j, contagem[j]);
     }


}
