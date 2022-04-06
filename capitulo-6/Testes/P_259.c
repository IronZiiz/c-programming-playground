/*#2-ESTUDO DE EXEMPLOS*/

/*Nosso próximo exemplo (Fig. 6.8) lê os números de um array e faz um gráfico
das informações na forma de um gráfico de barras ou histograma — cada número é
impresso e então uma barra constituída*/

/*Será praticamente um grafico*/

#include <stdio.h>
#define TAMANHO 10 /*Constante simbolica de 10 valores*/

    main(){
        int n[TAMANHO] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        int i, j; 

        printf("%s%13s%17s\n", "Elemento","Valor", "Histograma");

        for(i=0; i<=TAMANHO - 1; i++){
            printf("%8d%13d",i, n[i]); /*Imprimira o valor correspondente ao elemento*/

            for(j=1 ; j<= n[i]; j++) /*Imprimira a barra que formara o histograma conforme o tamanho de valor correspondente a n[i]*/
                printf("%c", '*'); 

            printf("\n");

            
            }
    return 0;
    }