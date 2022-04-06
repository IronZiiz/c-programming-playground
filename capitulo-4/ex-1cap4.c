#include <stdio.h> 
/*PROGRAMA PARA USO DO FOR COM CONDIÇÕES 
E ESTRUTURA DE REPETIÇÃO */
    main() { 
        /*Primeiro caso*/
        for ( x =2 ; x<=13; x +=2){ 
            printf ("%d\t ",  x);

        }
printf ( "\n "); 

        /*Segundo caso*/
        for ( x=5 ; x<=22; x+=7){
            printf("%d\t",x); 
        }
printf("\n");

        /*Terceiro caso*/
        for ( x=3; x<= 15 ; x+=3){
            printf("%d\t");

        }
printf ("\n"); 

        /*Quarto caso*/
        for(x=1 ;x<=5; x+=7){ 
            printf("%d\t",x); 
        }
printf("\n");

        /*Quinto caso*/
        for(x=12 ;x<=2; x-=3)
            printf("%d\t",x);
    return 0; 
    }