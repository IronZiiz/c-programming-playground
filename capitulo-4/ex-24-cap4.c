/*4.24Admita que i = 1, j = 2, k = 3 e m = 2. O que cada uma das seguintes instruções imprime?*/

#include <stdio.h>
    main() { 

        int i , j, k , m ; 
        i = 1;
        j = 2; 
        k = 3; 
        m = 2;
        /*caso a*/printf("%d\n",  i == 1);
                  /*imprime 1*/

        /*caso b*/printf("%d\n",  j == 3);
                  /*imprime 0*/

        /*caso c*/printf("%d\n",  i >= 1 && j < 4);
                  /*imprime 1*/

        /*caso d*/printf("%d\n", m <= 99 && k < m);
                  /*imprime 0*/

        /*caso e*/printf("%d\n",  j >= i  || k == m);
                  /*imprime 1*/

        /*caso f*/printf("%d\n",  k + m < j||  3 -j >= k) ;
                  /*imprime 0*/

        /*caso g*/printf("%d\n", !m);
                  /*imprime 0*/

        /*caso h*/printf("%d\n",   !   (j -m));
                  /*imprime 1*/

        /*caso i*/printf("%d\n", ! (k > m) ) ;
                  /*imprime 0*/

        /*caso j*/printf("%d\n",   !   (j > k));
                  /*imprime 1*/



    return 0; 
    }