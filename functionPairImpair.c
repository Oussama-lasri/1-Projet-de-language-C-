#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void PairImpair(int Nombre ){

    if (Nombre%2== 0)
        printf("%d est pair",Nombre);
    else
        printf("%d est impair",Nombre);

}




int main(){

        int N ;


        printf("Saisir N : ");
        scanf("%d",&N);

        PairImpair(N);








    return 0;
}
