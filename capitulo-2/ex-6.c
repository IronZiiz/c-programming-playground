#include <stdio.h>
main () { 
    int a,b,c; 
    printf ("Digite três numeros:"); 
    scanf("%d%d%d", &a,&b,&c); 
    
    printf("Soma:%d\n ", a+b+c); 
    printf("Media:%d\n", (a+b+c)/2 ); 
    printf("O produto:%d\n", a*b*c); 

        if ((a > b) && (b > c))
            printf ("%d maior de todos\n",a ); 
            if ((a < b) && (a < c))
                printf ("%d menor de todos\n",a);
         if ((b> a) && (b > c))
            printf ("%d maior de todos\n",b); 
            if ((b< a) && (b < c))
                printf ("%d menor de todos\n",b); 
         if ((c > a) && (c > b))
            printf ("%d maior de todos\n",c); 
            if ((c < a) && (c < a))
                printf ("%d menor de todos\n",c);  


return 0; 
} 