/*Escreva uma função que retorne o menor número entre três números de ponto
flutuante.*/

#include <stdio.h>
#include <stdlib.h>

double maiorFlut(double x, double y, double z); 

double main(){ 
    double x = 0, y = 0, z = 0; 

    printf("Digte três numeros flutuantes: ");
    scanf("%lf %lf %lf ", &x, &y, &z);
    maiorFlut(x , y, z);
return 0; 
}

double maiorFlut(double x, double y, double z){
    if(x < y && x < z){ 
        printf("%0.2lf é o menor dos flutuantes", x); 
    }
    if(y< x && y< z){
        printf("%0.2lf é o menor dos flutuantes", y);
    }
    if(z<x && z<y){
        printf("%0.2lf é o menor dos flutuantes");
    }
}