#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i , N ;


    printf("donner un nombre ");
    scanf("%d",&N);

    printf("la table de multiplication de %d est : \n",N);

    for(i=0 ; i <=10 ; i++){
        printf("%d * %d = %d\n",N,i,N*i);
    }









    return 0;
}
