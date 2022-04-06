/*Escreva uma função potencialnt (base, expoente) que retorne o valor de
base^expoente
Por exemplo, potencialnt (3,4) =3 * 3 * 3 * 3. Admita que expoente é um inteiro
positivo, diferente de zero, e base é um inteiro. A função potencialnt deve usar for para controlar o cálculo. 
Não use nenhuma das funções da biblioteca matemática */

#include<stdio.h>
#include<stdlib.h>

    int potencialnt(int x, int y); 

    main (){ 
        int x= 0 , y=0 ;
        printf("Digite a base e expoente que voce deseja:"); 
        scanf("%d%d", &x,&y);
            potencialnt(x, y);
    return 0;  
    }

    int potencialnt(int x, int y){
        int i;
        for(i=y ; y!=1 ; y--)
        {
            x+=x*1;
        }
        printf ("Potencia igual a:%d",x);
    }
