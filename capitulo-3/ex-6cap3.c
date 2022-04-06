#include <stdio.h>
main () { 
int nc, si, tco , c, lc; 

    printf ("Num da conta(-1 para finalizar):\n "); 
    scanf ( "%d", &nc);

        while ( nc != -1){
    printf ("Num da conta(-1 para finalizar):\n  "); 
            scanf ( "%d", &nc);

    printf ("Saldo inicial:\n " );
            scanf ("%d ", &si); 

    printf ("Total de cobranças:\n "); 
            scanf ("%d", &tco); 

    printf ("Total de creditos: "); 
            scanf ("%d ", &lc );

    printf("conta: %d\n", nc ); 
     printf("limite de credito : %d\n", lc); 
    printf ("Saldo: %d\n", si + tco); 

                if( si + tco > lc )
                    printf ("limite excedido");

                    

        }
return 0 ; 
} 