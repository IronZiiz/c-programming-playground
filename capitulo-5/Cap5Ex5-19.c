/*Modifique a função criada no Exercício 5.19 para formar um quadrado de qualquer
caracter que esteja contido como parâmetro fillCharacter. Dessa forma, se lado
for igual a 5 e fillCharacter for "#". a função deve imprimir*/

#include<stdio.h>
#include<stdlib.h>

    int fillCharacter(int x); 

    int main()
    {
        int x; 
            printf("digite um numero:");
            scanf("%d", &x);
            fillCharacter(x);
        return 0;
    }

    int fillCharacter(int x){
        int i;
        int i1;

            for ( i = 0; i <= x; i++)
            {
                printf("#");
                for (i1 = 0; i1 <= x-1; i1++ ){
                    printf("#");
                }
                printf("\n");
                
            }
            
    }
    
    