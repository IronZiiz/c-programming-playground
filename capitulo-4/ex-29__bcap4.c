/*(Leis de De Morgan) Neste capítulo, analisamos os operadores lógicos &&, II e !. 
As Leis de De Morgan podem fazer com que algumas vezes nos seja mais conveniente 
exprimir umaexpressão lógica. Estas lei afirmam que a expressão ! (condição 1 && condição2) 
é logicamente equivalente à expressão (!condição1 I I ! condição2).
Além disso, a expressão ! (condição1| |  condição2) é logicamente equilente à expressão
( ! condição1 | | ! condição2). Use as Leis de De Morgan para escrever expressões equivalentes
a cada um dos itens seguintes e depois escreva um programa que mostre que a expressão original 
e a nova expressão em cada caso são equivalentes.*/
#include <stdio.h>
    main(){

        int x,y; 

        /*a)*/
        x = 6;
        y = 5;
        if ( !x<5 || !y>=7 ){
            printf("aTrue\t");
        }
        else 
            printf("false\n");
        if( !(x<5) && !(y>=7)){ 
            printf("aTrue\n");
        }
        else 
            printf("aFalse\n");
        
        
        /*b)*/
        int g, a, b; 
        a = 2; 
        b = 3;
        g = 5;
        if (!( a == b || g != 5)){ 
            printf("bTrue\t");
        }
        else 
            printf("bFalse\n");
        if ( !a == b || !g !=5){
            printf("bTrue\n");
        }
        else 
        printf("bFlase\n");

        /*c)*/
        int X, Y; 
        X = 7;
        Y = 4;
        if ( !X <= 8 || !Y > 4){
            printf("cTrue\t");
        }
        else 
            printf("cFalse\n");
        if(!(X <= 8 && Y > 4)){
            printf("cTrue\n");
        }
        else 
            printf("cFalse\n"); 
        /*d)*/
        int i, j; 
        i = 3; 
        j = 7; 
        if(!(i > 4) || !(j <= 6)){
            printf("dTrue\t");
        } 
        else 
            printf("dFalse\n");

        if( !i>4 || !j<=6){ 
            printf("dTrue\n");
        }
        else 
            printf("dFalse\n");
    return 0; 
    }