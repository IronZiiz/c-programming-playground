/*Para cada um dos seguintes conjuntos de inteiros, escreva uma instrução simples
que imprima um número aleatório do conjunto.
c) 6, 10, 14, 18,22*/

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
           
                
        roll = 6 + (rand()%16);
            if ( roll == 7 || roll == 11 || roll == 15 || roll == 19)
            {
                printf("%d", roll+3);
            } 

            if ( roll == 8 || roll == 12 || roll == 16 || roll == 20)
            {
                printf("%d", roll+2);
            }             

            if ( roll == 9 || roll == 13 || roll == 17 || roll == 21)
            {
                printf("%d", roll+1);
            } 
            else {
                printf("%d",roll); 
            }
            
            
    return 0; 
    }