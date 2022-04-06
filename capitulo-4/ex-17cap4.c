/*Saldo execende ao limite ou não*/
#include <stdio.h>
main(){

    int i,n,limTT,saldo;
    limTT=0;
    saldo= 0;

    for (i=1 ; n!=0 ; i++){
        printf("Digite o numero da conta :");
        scanf("%d", &n); 
        printf("\n"); 
        printf("Digite o limimte antigo :");
        scanf("%d",&limTT);
        printf("Limite atual: %d", limTT/2);
        printf("\n"); 
        printf("Digite o saldo atual:"); 
        scanf("%d", &saldo);
        printf("\n");
            if(saldo > limTT/2){ 
                printf("O usuario da conta:%d, tem saldo excedente ao limite:%d\n",n , limTT/2); 
                printf("\n");
            }
            else { 
                printf("O usuario da conta:%d, não tem saldo excedente ao limite:%d\n",n,limTT/2 );
                printf("\n");
            }
    } 

return 0;
}