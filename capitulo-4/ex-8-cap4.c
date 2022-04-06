/*Soma os numeros atraves de loop com estrutra 
For e faz uma media; Estabelece um valor sentinela 9999*/

#include <stdio.h>
    main(){
    
        int cont, x, total, media; 
        media = 0;
        total = 0;

        for (cont= 0; x != 9999; cont++)
        {
            /* code */
            printf ("Digite o numero:");
            scanf("%d", &x);

            total+=x; 
        }
            media = (total-9999)/(cont-1);
            printf("media: %d", media); 
         
    return 0; 
    }