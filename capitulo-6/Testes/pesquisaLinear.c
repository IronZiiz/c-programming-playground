/*Metodo de pesquisa linear de um elemento em array*/

#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int main(){
    int vct[10]={1,2,3,4,6,13,22,12,14,51};
    int i;

        for(i = 0 ; i<TAM; i++)
        {
            if(vct[i]==4)
            {
                printf("O elemento foi encontrado na posicao:%d", i);
            }
        }

    return 0;
}