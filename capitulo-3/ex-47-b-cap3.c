/*n finalizado*/
#include <stdio.h> 
main(){ 
    int x,y,i;
    x=1 ; 
    y= 1;
    for(i=1 ; i <=  10 ; i++ ){
     for (i=1 ; i!=0 ; i-- ){
         y*=i ;
        } 
    x+=1/y; 
    }
    printf("\n");
    printf("resultado:%d", x); 

return 0; 
}