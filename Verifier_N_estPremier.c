#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i , N ;
    int estpremier = 1 ;

    printf("donner un nombre ");
    scanf("%d",&N);

    for(i=2 ; i <= N/2 ; i++){
        if ( N%i == 0){
            estpremier = 0 ;
            break;
            }
    }
    if(estpremier == 1)
         printf("le nombre %d est premier",N);
    else
        printf("le nombre %d est non premier",N);











    return 0;
}
