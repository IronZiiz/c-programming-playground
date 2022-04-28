/*Imprima os 5 valores do array inteiro melhoresEscores em um formato de coluna*/

#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int main()
{
    int melhoresScores[TAM] = {2222,4444,1111,3333,5555};
    int contador, aux=0, i;

    /*Bubblesort para organizar*/
     for(contador=1 ; contador < TAM; contador++){
        for(i=0; i<TAM-1; i++){
            if(melhoresScores[i]>melhoresScores[i+1]){
                aux= melhoresScores[i];
                melhoresScores[i]=melhoresScores[i+1];
                melhoresScores[i+1]=aux; 
            
            }
        }
    }

    printf("Melhores Scores:\n");
    for(i  =  0  ; i < TAM ; i++)
    {
    printf("Score[%d]:%d\n", i+1,melhoresScores[i] );
    }
   


    return 0;
}