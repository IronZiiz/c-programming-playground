/*Escreva uma função que mostre, na margem esquerda da tela, um quadrado de
asteriscos cujo lado é especificado por um parâmetro inteiro lado. Por exemplo, se
lado for igual a 4, a função exibe*/

#include<stdio.h>
#include<stdlib.h>

    int lado(int x); 
    main(){

        int x; 
        printf("Digite o tamanho do lado:");
        scanf("%d", &x);
        lado(x);
    return 0; 
    }

    int lado(int x)
{
    int i; 
    int i1;
        for ( i = 0; i <= x ; i++)
        {
           printf("*");
            for(i1 = 0; i1<=x-1; i1++)
            { 
            printf("*");
            }
           printf("\n");
        }
}

        

    