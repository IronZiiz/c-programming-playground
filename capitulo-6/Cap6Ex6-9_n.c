/*n) Escreva uma série de instruções em C que imprima o array t em um formato
organizado de tabela. Liste os subscritos das colunas como cabeçalho ao longo do
topo e liste os subscritos das linhas à esquerda de cada linha.*/

#include <stdio.h>
#include <stdlib.h>
#define TAM1 2
#define TAM2 5 


int main()
{
    int t[TAM1][TAM2]= {{5,1,3,4,2},{10,9,8,7,6}};
    int i=0, j=0 ; 

    for(i = 0; i <TAM1 ; i++ )
        {
            for(j = 0 ; j < TAM2 ; j++)
                {
                    printf(" array[%d][%d]:%d  ",i,j,t[i][j] );
                    if(j == 4){
                        printf("\n");
                    }
                }
        }

return 0;

}