/*Use técnicas similares às descritas nos Exercícios 5.19 e 5.20 para produzir um
programa que faça gráficos com uma grande variedade de formas.*/

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
                for (i1 = 0; i1 <= x-1; i1++2 ){
                    printf("#");
                }
                printf("\n");
                
            }
            
    }
    