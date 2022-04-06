/*Escreva um programa que receba uma série de inteiros e remeta um deles de cada
vez para a função even que usa o operador resto (modulus) para determinar se um
inteiro é par. A função deve utilizar um argumento inteiro e retornar 1 se o inteiro
for par e 0 em caso contrário.*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

    int even(int x);

    main(){
        int x = 0; 
        int i; 

            for ( i = 0; i <=10; i++)
            {
                printf("Digite um numero:");
                scanf("%d", &x);
                even(x);
                

            }
            

    return 0;
    }

    int even(int x)
    {
        int y = 0; 

        y = x%2; 

            if(y==0)
            {
                printf("1(par)\n");
            }
            else
            {
                printf("0(impar)\n");
            }
    }
