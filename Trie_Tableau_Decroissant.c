#include <stdio.h>
#include <stdlib.h>
#include <string.h>








int main(){

        int Taille ,i,ech ,j;
        printf("donner la taille de tableau : ");
        scanf("%d",&Taille);
        int T[Taille];
        for(i=0 ;i<Taille ; i++){
            printf("donner la valeur %d : ",i+1);
            scanf("%d",&T[i]);
        }

        for(i=0 ;i<Taille ; i++){
            for(j=i+1 ;j<Taille ; j++){
            if (T[i]<T[j]){
                ech = T[i];
                T[i] = T[j];
                T[j] = ech ;
                }
            }

        }

        for(i=0 ;i<Taille ; i++){
            printf("T[%d] = %d : ",i+1,T[i]);

        }










    return 0;
}
