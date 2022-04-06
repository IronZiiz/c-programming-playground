/*Para cada um dos seguintes conjuntos de inteiros, escreva uma instrução simples
que imprima um número aleatório do conjunto.
b) 3,5,7,9, 11.*/

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
           
                
        roll = 3 + (rand()%8);
            if ( roll == 4 || roll == 6 || roll == 8 || roll == 10)
            {
                printf("%d", roll+1);
            } 
            else {
                printf("%d",roll); 
            }
            
            
    return 0; 
    }