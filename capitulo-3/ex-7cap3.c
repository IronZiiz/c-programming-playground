/*Calculo de salario*/

#include <stdio.h> 
main (){
    int total, x; 

    printf ("Digite o valor de vendas (-1 para finalizar):"  );
    scanf ( "%d ", &x);
    total = 0 ;
    while (x!= -1 ) {
    printf ("Digite o valor de vendas (-1 para finalizar):"  );
        scanf ( "%d ", &x);

    total += (x*0.09 )+200;
    printf ("salario da semana %d ", total); 
    if (x != 0)
    printf (" acabou");
    }
return 0; 
}