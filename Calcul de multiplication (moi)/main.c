#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int x,y;
	int a1,b1,c1,d1,a2,b2,c2,d2;
	
	printf("saisir les valeurs de x (x est de 4 digits) \n");
	scanf("%d",&x);
		printf("saisir les valeurs de y (y est de 4 digits) \n");
	scanf("%d",&y);
	a1=floor(x*pow(10,-3));
	b1=floor(x*pow(10,-2)-a1*10);
	c1=floor(x*pow(10,-1)-b1*10-a1*100);
	d1=floor(x*pow(10,0)-b1*100-c1*10-a1*1000);
	
	a2=floor(y*pow(10,-3));
	b2=floor(y*pow(10,-2)-a2*10);
	c2=floor(y*pow(10,-1)-b2*10-a2*100);
	d2=floor(y*pow(10,0)-b2*100-c2*10-a2*1000);
	
	printf(" a1=%d \n b1=%d \n c1=%d \n d1=%d     \n\n a2=%d \n b2=%d \n c2=%d \n d2=%d  ",a1,b1,c1,d1,a2,b2,c2,d2);
	
	
	
	return 0;
}
