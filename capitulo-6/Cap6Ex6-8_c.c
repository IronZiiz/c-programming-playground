/*Somem os elementos de um array de ponto flutuante c que possui 100 elementos.*/

#include <stdio.h>
#include <stdlib.h>
#define TAM 10

    float main()
    {
        float ar[TAM] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.10}, soma=0;
        int i;

        for(i = 0 ; i <TAM; i++)
        {
            soma+=ar[i];
            printf("Progressao da soma:%f\n", soma);
        }




        


    
   

    return 0;
    }