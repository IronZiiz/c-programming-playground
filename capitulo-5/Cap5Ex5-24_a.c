/*Implemente as seguintes funções inteiras:
a) A função celsius retorna a temperatura em Celsius equivalente a uma
temperatura em Fahrenheit.*/

#include<stdio.h>
#include<stdlib.h>

    double celsius(double x);

double main(){
    double x=0;
    printf("Digite a temperatura em Celsius:");
    scanf("%lf", &x);
    celsius(x);

return 0; 
}

    double celsius(double x){
        double Fa;

        Fa = x*1.8 +32; 

        printf("Temperatura convertida em fahrenheit:%0.2f", Fa);

    }