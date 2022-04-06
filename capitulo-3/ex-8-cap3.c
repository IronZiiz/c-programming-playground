/*Juros cobrados por dias sobre tal emprestimo */
#include <stdio.h>

main () {
    float capital, taxa, dias, juros; 

    printf("Entre com o valor do emprestimo(-1 para finalizar):");
    scanf("%f ", &capital); 

    while( capital != -1 ){ 
    printf("Entre com o valor do emprestimo(-1 para finalizar):");
    scanf("%f ", &capital);
    printf("Entre com a taxa de juro:\n"); 
    scanf ("%f", &taxa ); 
    printf("Entre com o periodo do emprestimo em dias:\n "); 
    scanf("%f",&dias); 

    juros= (capital * taxa * dias); 
    printf ("O valor dos juros %2f ", juros); 

 
    }
    if (capital != 0)
    printf("FINALIZADO "); 
return 0 ; 
}