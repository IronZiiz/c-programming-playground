/*Com e sem especificadores de conversão*/
#include <stdio.h>
    main() {
        int a,b; 
        /*Sem expecificadores*/
            printf ("2 e 4\n "); 
        /*Com expecificadores*/

            printf ("Digite os valores 2 e 4 ");
            scanf ("%d%d", &a,&b); 
            printf ("%d%d", a, b); 
    return 0; 
    } 