#include <stdio.h>
#include <stdlib.h>

int main()
{

   int menuN ;
   printf("----menu----\n");
   printf(" 1-pizza \n 2-tacos \n 3- pizza viande \n 4-salade \n");
   printf("choisir  un nombre de food : ");
   scanf("%d",&menuN);





   switch(menuN){
        case 1 : printf(" vous avez choisi pizza");
                   break ;
        case 2 : printf(" vous avez choisi taco ");
                   break ;
        case 3 : printf ("vous avez choisi pizza viande");
                    break ;

        case 4 : printf(" vous avez choisi salade ");
                    break ;
        default :
            ("vous n'avez pas choisi ");
   }
    return 0;
}
