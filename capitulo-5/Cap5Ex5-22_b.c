/*Escreva segmentos de programas que realizem cada uma das tarefas seguintes:
b)Calcule o resto inteiro quando um inteiro a é dividido por um inteiro b*/

#include<stdio.h>
#include<stdlib.h>

    int main(){
        int a=0, b=0; 
        int resto=0; 

        printf("Digite o numero a:"); 
        scanf("%d", &a); 

        printf("\n");

        printf("Digite o numero b:");
        scanf("%d", &b);

        printf("resto:%d", a%b);

    return 0;
    }

