/*CODIFICAÇÃO de um numero de 4 digitos  */
#include <stdio.h>

main (){ 
    int x, num1, num2, num3, num4 ;

    printf("Digite um numero de 4 digitos:"); 
    scanf("%d", &x);

    num1 =x/1000;
    num2 =(x%1000)/100;
    num3 =(x%100)/10;
    num4 =x%10;

    printf("\n");
    printf("separado  fica assim:%d,%d,%d,%d\n", num1,num2,num3,num4);

    /*Codificando*/

    num1 =(num1+7) % 10;
    num2 =(num2+7) % 10;
    num3 =(num3+7) % 10;
    num4 =(num4+7) % 10;

    printf("\n");
    printf("Primeira codificação:%d%d%d%d\n", num1,num2,num3,num4);

    /*Finaliziação*/

    printf("Finalização codificação:%d%d%d%d", num3,num4,num1,num2);


 
return 0; 
}