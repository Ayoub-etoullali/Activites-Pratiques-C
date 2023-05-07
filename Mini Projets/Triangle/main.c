#include <stdio.h>
#include <stdlib.h>

int main() {

int i,j,n,k;

printf("donnez le nombre des lignes : ");
scanf("%d",&n);

for(i=0 ; i<n ; i++)
{
   for(j=i ; j<n-1 ; j++)
   {
      printf(" ");
   }
   for(j=0 ; j<i ; j++)
   {
      printf("*");
   }
   for(k=0 ; k<i ; k++);
   {
      printf("*");
   }
    printf("\n");
}

 return 0;
}
