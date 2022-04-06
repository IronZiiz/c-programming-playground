/*Gerador numeros binarios até 256 */
#include <stdio.h>

    int main()
    {
        int numdec, numb, numb1 ;

        for (numdec = 1; numdec <=255; numdec++){
            printf("numero decimal %d| Conversão p/a binario:", numdec);
            
            numb = 0;
            numb1 = 0; 

            numb1=numdec/128;
            numb=numdec%128;

                if ( numb1 == 1){
                printf("1");
                }
                else {
                printf("0");
                }

                numb1 = numb/ 64;
                numb = numb%64;
                if ( numb1 == 1 ){
                printf("1");
                }
                else {
                printf("0");
                }             
                
                numb1 = numb/32; 
                numb = numb%32;
                if ( numb1 == 1 ){
                printf("1");
                }
                else {
                printf("0");
                }
                
                numb1 = numb/16; 
                numb = numb%16;
                if ( numb1 == 1 ){
                printf("1");
                }
                else {
                printf("0");
                }

                numb1 = numb/8;
                numb = numb%8;
                if ( numb1 == 1 ){
                printf("1");
                }
                else {
                printf("0");
                }

                numb1 = numb/4; 
                numb = numb%4;
                if ( numb1 == 1 ){
                printf("1");
                }
                else {
                printf("0");
                }
                
                numb1 = numb/2; 
                numb=numb%2;
                if ( numb1 == 1 ){
                printf("1");
                }
                else {
                printf("0");
                }
                
                numb1= numb/1; 
                
                if( numb1 == 1 ){
                printf("1");
                }
                else {
                printf("0");
                }
                printf("\n");
        }
        return 0;
    }
    

    