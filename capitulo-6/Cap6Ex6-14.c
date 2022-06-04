/*Modifique o programa da Fig. 6.16 de forma que a função moda seja capaz de
manipular um empate no valor da moda. Modifique também a função mediana de forma
que seja encontrada a média dos dois valores do meio de um array com número par de
elementos. */

#include <stdio.h>
#include <stdlib.h>
#define TAM 10 

int main()
{
/*Variaveis*/
    int i,contador,aux=0, j; 
    float vct[TAM], soma=0, media=0, mediana=0; 

/*Media*/
    for(i= 0; i<10; i++)
    {
        printf("v[%d]:",i);
        scanf("%f", &vct[i]); 

        soma +=vct[i];
    }
    
    printf("\n");
    media = soma/TAM;
    printf("Media: %.lf\n", media);



  /*Moda*/
    int moda[TAM] = {0,0,0,0,0,0,0,0,0,0}; 
    for(i = 0 ; i<TAM; i++)
    {
        for ( j = i; j <TAM; j++)
        {
            if(vct[i]==vct[j])
            {
                moda[i]++;
            }

        }
        
    }

    for(i = 0 ; i<TAM ; i++)
    {
        if(moda[i]>1)
        {
            for(j=i+1; j<TAM; j++)
            {
                if(moda[i] == moda[j])
                {
                    printf("A moda %f deu empate com a moda %f\n", vct[i], vct[j]);
                }
              
            }
        }
    }

    


    
    return 0; 
}