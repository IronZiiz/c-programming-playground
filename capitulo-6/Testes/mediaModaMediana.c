/*Programa rodando media, moda e mediana com Array*/
/*10 valores*/

#include <stdio.h>
#include <stdlib.h>
#define TAM 10 

int main()
{
/*Variaveis*/
    int i,contador,aux=0, j; 
    float vct[TAM], soma=0, media=0, mediana=0, vctF[TAM] = {0}, maxfreq =0; 

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

/*Mediana*/
/*Metodo bubblesort para ordenar */

     for(contador=1 ; contador < TAM; contador++)
     {
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

    if(TAM%2 == 0)
    {
        mediana= (vct[TAM/2] + vct[(TAM/2)-1])/2;
        
        printf("Mediana:%0.2f\n", mediana);
    }

    for (i=0; i<TAM; i++)
    {
        for(j=i; j< TAM; j++)
        {
            if(vct[i]==vct[j])
            {
               vctF[i]++;
            }
        }
    }

    for(int i=0; i<TAM; i++){
        if(maxfreq<vctF[i]){
            maxfreq=vctF[i];
        }
    }

    if(maxfreq == 1){
        printf("Amodal");

    }else{
        printf("Moda:");
        for(int i=0; i<TAM; i++){
            if(maxfreq == vctF[i]){
                printf("%.lf",vct[i]);
            }
        }
    }
    return 0; 

}