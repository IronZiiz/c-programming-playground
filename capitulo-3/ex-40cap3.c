#include <stdio.h>
main() { 

    int x ; 

    for ( x = 8 ; x != 0 ; x--){ 
        if (x == 8 || x == 6 || x == 4 || x==2 || x==0)
        {
            printf ("*  *  *  *  *  *  *");
            printf("\n");
        }
        else {
            printf ("  *  *  *  *  *  *  *");
            printf("\n");
        }

    }

return 0; 
}