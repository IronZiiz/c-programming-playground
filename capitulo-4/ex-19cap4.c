#include  <stdio.h>
main() { 

    int x; 
    float y; 
    printf("digite o numero do produto:");
    scanf("%d",&x); 
    printf("Digite a quantidade vendida:");
    scanf("%f",&y); 

    switch (x){ 
        case 1 : 
         printf("O Produto 1 custa R$2,98\n");
         y *=2.98;
         printf("O Total vendido semana passada é:%0.2f",y); 
        break ; 

        case 2 : 
         printf("O Produto 2 custa R$4,5\n");
         y *=3.5;
         printf("O Total vendido semana passada é:%0.2f",y); 
        break ;

        case 3 : 
         printf("O Produto 3 custa R9,98\n");
         y *=9.98;
         printf("O Total vendido semana passada é:%0.2f",y); 
        break ; 

        case 4 : 
         printf("O Produto 4 custa R$4,49\n");
         y *=4.49;
         printf("O Total vendido semana passada é:%0.2f",y); 
        break ;

        case 5 : 
         printf("O Produto 5 custa R$6,87\n");
         y *=6.87;
         printf("O Total vendido semana passada é:%0.2f",y); 
        break ;  

        default:
         printf("incorreto :("); 
        break;
    } 

return 0 ; 
} 