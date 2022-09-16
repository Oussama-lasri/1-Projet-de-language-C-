#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

        int i,ech ,j;
        /*printf("donner la taille de tableau : ");
        scanf("%d",&Taille);
        int T[Taille];
        for(i=0 ;i<Taille ; i++){
            printf("donner la valeur %d : ",i+1);
            scanf("%d",&T[i]);
        }*/
         int T[]={6,8,-8,4,9,10,-1,15,33,3};
        int Taille = 10 ;
    for(i=0 ;i<Taille ; i++){
            for(j=i+1 ;j<Taille ; j++){
                if (T[i]>T[j]){
                    ech = T[i];
                    T[i] = T[j];
                    T[j] = ech ;
                    }
            }

    }



       printf("apres  le tri \n");
     for (int k = 0 ; k< Taille ; k++){
            printf("T[%ld] : %ld \n",k+1,T[k]);

    }










    return 0;
}
