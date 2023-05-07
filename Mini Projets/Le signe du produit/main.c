#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B ;
    printf("ecrire A \n");
    scanf("%d",&A);
    printf("ecrire B \n");
    scanf("%d",&B);

    if((A>0 && B>0)||(A<0 && B<0))
    {
        printf("le signe du produit de %d et %d est positif \n",A,B);
    }
    else {printf("le signe du produit de %d et %d est négatif \n",A,B);}
        return 0;
}
