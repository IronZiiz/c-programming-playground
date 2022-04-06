/*Fatorial de um numero qualquer*/
#include <stdio.h> /*Fatorial*/  
    main ( ){ 
        int x, i, f   ;
        printf("Digite um numero: ");
        scanf ("%d",&x); 

        f= 1;
        for (i = x; x!=0 ; x-- ){
        f *=x; 
        }
        printf("fatorial:%d\n", f); 
        
    return 0; 
    }