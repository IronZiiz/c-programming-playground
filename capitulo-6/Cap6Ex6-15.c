/*Use um array unidimensional para resolver o seguinte problema. Leia 20 números,
todos situados entre 10 e 100, inclusive. À medida que cada número for lido,
imprima-o somente se não for duplicata de um número já lido. Experimente o "pior
caso", no qual todos os 20 números são diferentes. Use o menor array possível para
resolver esse problema. */

#include <stdio.h>
#include <stdlib.h>
#define TAM 20

main()
{

    int array[TAM] = { }; 
    int i = 0, j = 0, contadorDeArray = 0; 

    for(i = 0; i<=TAM; i++)
    {
    contadorDeArray = 0;

        printf("Digite um numero situado entre 10 e 100:"); 
        scanf("%d", &array[i]);
        printf("\n");

        /*Estrutura condicional*/
        /*Terá e passar por todos os valores*/
        for ( j = 0; j < TAM; j++)
        {
            if(array[i] == array[j] )
            { 
                contadorDeArray++;
            }
        }
        if(contadorDeArray == 1)
        {
            printf("Numero:%d\n", array[i]);
        }else{

        }
    } 

return 0 ;
}