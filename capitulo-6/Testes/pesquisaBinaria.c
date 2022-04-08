/*Metodo de pesquisa binaria de um elemento em um arrray*/
/*Primeiro deve ter uma ordenação de valores */
/*Case I: Valor < vct[mid]*/
/*Case II: Valor == vct[mid]*/
/*Case III: Valor > vct[mid]*/

#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int main()
{
    int i , vct[TAM] = {1,2,4,5,6,7,8,6,12,34}, aux=0, mid=0, valor=0;

    for(i=1 ; i < TAM; i++){
        for(i=0; i<TAM-1; i++)
        {
            if(vct[i]>vct[i+1])
            {
                aux= vct[i];
                vct[i]=vct[i+1];
                vct[i+1]=aux; 
            }
        }
    }
    printf("\n Elementos do array em ordem crescente:\n");
        for(i = 0; i<TAM ;i++){
            printf("%4d", vct[i]);
        }
        printf("\n");
        
    printf("Digite o valor que voce gostaria de saber a posicao:"); 
    scanf("%d",&valor);
    printf("\n");

    /*Achando o termo central*/
      if(TAM%2 == 0)
    {
        mid= (vct[TAM/2] + vct[(TAM/2)-1])/2;
        
        printf("Mediana:%d\n",mid);
        printf("\n");
    }


    /*Separando o array*/
    if(valor < mid)
    {
        for(i = 0 ; i<TAM/2; i++)
            {
                if(vct[i]== valor)
                {
                    printf("O elemento foi encontrado na posicao:%d", i);
                }
            }
    }

    if(valor == mid)
    {
            printf("O elemento foi encontrado na posicao:%d", TAM/2);
       
    }

/*Ainda nao finalizado*/
    else{
         for(i = 0 ; i>TAM/2 ; i++)
            {
                if(vct[i]== valor)
                {
                    printf("O elemento foi encontrado na posicao:%d", i);
                }
            }
    }

    return 0;

}