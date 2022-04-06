/*Escreva segmentos de programas que realizem cada uma das tarefas seguintes:
c) Use os segmentos de programa desenvolvidos em a) e b) para escrever uma
função que receba um inteiro entre 1 e 32767 e o imprima com uma série de
dígitos, separados por dois espaços. Por exemplo, o inteiro 4562 deve ser impresso
como*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0; 
    
    printf("Digite um numero entre 1 e 32767:"); 
    scanf("%d", &n); 

        if(n < 10){ 
            printf("%d", n);
        }
        if(n >= 10 && n < 100){
            printf("%d\t%d", n%10 , n/10);
        }
        if(n >= 100 && n< 1000){
            printf("%d\t%d\t%d", n/100, (n%100)/10, n%10);
        }
        if(n >= 1000 && n < 10000 ){
            printf("%d\t%d\t%d\t%d", n/1000, (n%1000)/100, (n%100)/10, n%10);
        }
        if(n >= 10000 && n < 32768){
            printf("%d\t%d\t%d\t%d\t%d",n/10000, (n%10000)/1000, (n%1000)/100 , (n%100)/10, n%10 );
        }

    return 0;
}
