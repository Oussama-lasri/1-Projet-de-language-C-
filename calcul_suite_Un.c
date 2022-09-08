#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i , N ,U0,Un;

    printf("donner un nombre ");
    scanf("%d",&N);
    U0 = 6 ;
    for(i=1 ; i <=N ; i++){
        Un = 4 * U0 +10 ;
        U0 = Un ;
    }

    printf("le resultats de U%d est %d",N,Un);









    return 0;
}
