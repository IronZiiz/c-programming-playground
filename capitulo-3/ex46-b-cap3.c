/*DECODIFICAÇÃO de um numero de 4 digitos*/
#include <stdio.h>

main (){ 
    int x, num1, num2, num3, num4 ;

    printf("Digite um numero de 4 digitos:"); 
    scanf("%d", &x);

    num3 =x/1000;
    num4 =(x%1000)/100;
    num1 =(x%100)/10;
    num2 =x%10;

    printf("\n");
    printf("separado  fica assim:%d,%d,%d,%d\n", num1,num2,num3,num4);
if ( num1< 7){   
    num1 =num1+3;
}
else { 
    num1 = (num1+3)%10;
}
if ( num2< 7){   
    num2 =num2+3;
}
else { 
    num2 = (num2+3)%10;
}
if ( num3< 7){   
    num3 =num3+3;
}
else { 
    num3 = (num3+3)%10;
}
if ( num4< 7){   
    num4 =num4+3;
}
else { 
    num4 = (num4+3)%10;
}
   
 
    printf("Decodificado:%d%d%d%d", num1,num2,num3,num4);


 return 0;    
}