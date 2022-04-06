/*Escreva uma função que obtenha a hora como três argumentos inteiros (para horas,
minutos e segundos) e retorne o número de segundos desde a última vez que o
relógio "soou as horas". Use essa função para calcular o intervalo de tempo em
segundos entre duas horas, ambas dentro de um ciclo de doze horas do relógio.*/

#include <stdio.h> 
#include <stdlib.h>

 int ContadorDeHoras(int x,int y,int z);

 int main(){
     int x=0 ,y=0 ,z=0;

        printf("Digite as horas, minutos e segundos:"); 
        scanf("%d%d%d", &x,&y,&z);
        ContadorDeHoras(x,y,z);
    
 return 0; 
 }

 int ContadorDeHoras(int x,int y,int z){
     printf("Estas sao as horas:%d:%d:%d\n", x,y,z);
     printf("A ultima vez que soou as horas foi a %d segundos", z+(y*60));



 }