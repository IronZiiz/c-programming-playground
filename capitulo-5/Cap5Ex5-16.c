/*Escreva uma função múltiplo que determine, para um par de números inteiros, se o
segundo número é múltiplo do primeiro. A função deve ter dois argumentos
inteiros e retornar 1 (verdadeiro) se o segundo número for múltiplo do primeiro, e
0 (falso) em caso contrário. Use essa função em um programa que receba uma série
de números inteiros.
*/

#include<stdio.h>
#include<stdlib.h>

    int multiplo(int x, int y);

main(){ 

    int x=0,y=0;
    int i; 

        for (i = 5; i != 0; i--)
        {
            printf("Digite um par de numeros:");
            scanf("%d%d", &x,&y);
            multiplo(x,y);
            printf("\n");
        }
        
return 0;
}

    int multiplo(int x, int y){
        int i;
        int verif; 
        for(i = 9 ; i != 0; i--)
        {
            verif= 0; 
            verif = y * i; 
            if( verif == x)
            {
                printf("1(true)");
            }
        }
            if(y*9!=x && y*8!=x && y*7!=x && y*6!=x && y*5!=x && y*4!=x && y*3!=x && y*2!=x && y*1!=x){
                printf("0(false)");
            }
         
    }