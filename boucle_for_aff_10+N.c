#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i , N ;
    printf("donner un nombre ");
    scanf("%d",&N);
    printf("affichage de nombre %d jusqu'a %d : \n",N,N+9);
    i=0;
    do{
        printf("%d ",N+i);
        i++;
    }while(i<=10);




    return 0;
}
