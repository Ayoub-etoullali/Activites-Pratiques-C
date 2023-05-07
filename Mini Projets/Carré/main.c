#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,k;

    printf("Donner le nombre de lignes :");
    scanf("%d",&n);

    for(i=0 ; i<n ; i++)
    {
        for(k=0 ; k<n ; k++)
    {
        printf("*");
    }

    printf("\n");

    }

    return 0;
}
