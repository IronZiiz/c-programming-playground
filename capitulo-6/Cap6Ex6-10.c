/*Use um array unidimensional para resolver o seguinte problema. Uma companhia
paga seus vendedores com base em comissões. O vendedor recebe $200 por semana
mais 9 por cento de suas vendas brutas daquela semana. Por exemplo, um vendedor
que teve vendas brutas de $3000 em uma semana recebe $200 mais 9 por cento de
$3000, ou seja, um total de $470. Escreva um programa em C (usando um array de
contadores) que determine quantos vendedores receberam salários nos seguintes
intervalos de valores (considere que o salário de cada vendedor é trancado para que
seja obtido um valor inteiro):
1. $200-$299
2. $300-$399
3. $400-$499
4. $500-$599
5. $600-$699
6. $700-$799
7. S800-S899
8. $900-$999
9. $1000 em diante*/

#include <stdio.h>
#include <stdlib.h> 
#define TAM 9

int main ()
{
    int array[TAM] = {}; 
    int i, j, bruto = 0 ;
    float salario = 0;

    /*Calculo do salario*/
    for(i = 0; i<=TAM; i++)
    {
        salario = 0; 
        printf("Digite a Venda bruta Vendedor[%d]:", i);
        scanf("%d", &bruto); 
        salario = (0.09*bruto ) + 200 ;
        
            if( salario>=200 && salario<=299)
            {
                array[0]++;
                
            }
            if( salario>=300 && salario<=399)
            {
                array[1]++;
            }
            if( salario>=400 && salario<=499)
            {
                array[2]++;
            }
            if( salario>=500 && salario<=599)
            {
                array[3]++;
            }
            if( salario>=600 && salario<=699)
            {
                array[4]++;
            }
            if( salario>=700 && salario<=799)
            {
                array[5]++;
            }
            if( salario>=800 && salario<=899)
            {
                array[6]++;
            }
            if( salario>900 && salario<=999)
            {
                array[7]++;
            }
            if( salario >= 1000 ){
                array[8]++;
            }
            
    } 

    for(j = 0 ; j <TAM; j++)
    {
        printf("Intervalo[%d]:%d venderores\n",j+1, array[j]);
    }



    return 0 ; 
}
