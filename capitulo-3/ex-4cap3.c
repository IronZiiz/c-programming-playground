#include <stdio.h>
    main () {

    int x, y, contador,p;
    p = 1 ;
    contador = 0 ; 
    printf ("DIGITE O VALOR X : ");
        scanf ("%d",&x); 
    printf ("DIGITE O VALOR Y :"); 
        scanf ("%d",&y); 

        while (contador <y){ 
            p *=x; 
            contador++; 
        }
        printf ("Potencia: %d ", p ); 


    return 0; 
    }