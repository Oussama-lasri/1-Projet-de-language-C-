#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i  ,j;



    printf("la table de multiplication de 1 jesqu'a 10\n");

    for(i=1 ; i <=10 ; i++){
            for(j=1 ; j <=10 ; j++){
               printf("%d * %d = %d\n",i,j,j*i);
               }
               printf("\n");
    }









    return 0;
}
