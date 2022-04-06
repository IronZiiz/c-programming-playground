#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    int arredonda(double x );

    main () { 

        double x = 0 ; /*Numero pego*/
        int i; /*Indice*/

            for (i = 0 ; i <= 10 ; i++){
                
                printf("Digite o numero a ser arredondado:");
                scanf("%lf", &x);
                printf("valor do Xmeu:%f\n", x); 
                arredonda(x); 


            }
    
    return 0; 
    }

    int arredonda(double x){
        printf("Original:%0.2f\tArrendondado: %0.2f\n ", x,floor(x+.5)); 
 
    }