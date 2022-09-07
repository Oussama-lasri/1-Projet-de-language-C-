#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    char sexe;
    printf("veuillez entrer votre sexe :");
    scanf ("%c",&sexe);
    printf("veuillez entrer votre age :");
    scanf ("%d",&age);
    if ((sexe == 'h' && age >= 20 ) || (sexe=='f' && (age>= 18 && age<=35))){
            printf ("vous devriez paye");
    }
    else
             printf ("vous ne devriez pas paye");
    return 0;
}
