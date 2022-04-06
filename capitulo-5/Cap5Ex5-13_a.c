/*Para cada um dos seguintes conjuntos de inteiros, escreva uma instrução simples
que imprima um número aleatório do conjunto.
a) 2, 4, 6, 8, 10*/

#include<stdlib.h>
#include<stdio.h>

    main()
    {
        int i; 
        unsigned semente; 
        int roll; 

        printf("Digite a semente:"); 
        scanf("%u", &semente);
        srand(semente); 
           
                
        roll = 1 + (rand()%10);
            if ( roll == 1 || roll == 3 || roll == 5 || roll == 7 || roll == 9){
                printf("%d", roll+1);
            } 
            else {
                printf("%d",roll); 
            }
            
            
    return 0; 
    }