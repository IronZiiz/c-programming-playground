/*j) Escreva uma instrução em C que entre com os valores dos elementos de t a partir do
terminal*/

#include <stdio.h>
#include <stdlib.h>
#define TAM1 2
#define TAM2 5 

int main()
{
    int t[TAM1][TAM2]= {};
    int i, j; 
    
    for(i = 0; i <TAM1 ; i++ )
        {
            for(j = 0 ; j < TAM2 ; j++)
                {
                    printf("Entre com o valor do array[%d][%d]:",i,j );
                    scanf("%d", &t[i][j]);
                    printf("\n");
                }
        }

    /*Imprimindo valores*/

    for(i = 0; i <TAM1 ; i++ )
        {
            for(j = 0 ; j < TAM2 ; j++)
                {
                    printf(" array[%d][%d]:%d\n",i,j,t[i][j] );
                }
        }

return 0; 
}