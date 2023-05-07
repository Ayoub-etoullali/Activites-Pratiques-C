/*
I - Conception
/* problèmes de calcul
le PGCD(x,y) -> 1) reduire de regner
			-> 2) diviser pour régner
calcul de racine carre
		-> approche itérative 
		
caclul du produit matriciel
		-> 1) approche classique
		-> 2) diviser pour régner (algo strassen)
		
II evaluation des couts des <> algorithmes

III le codage en langage C



//Abstraction du pb --> boite noire

  x--->|
  	   |   PGCD      | ---> z=PGCD(x,y)
  y--->|
=> 1) recherche dans [1 y] la valeur d tq x%d==0 && y%d==0
=> 2) PGCD(x,y)-> PGCD(y,x%y) jusque ce que y soit nul -> deduire que le PGCD est x
*/


//Directives de compilation
#include<stdio.h>  // signateur des fonctions (pour compiler...)

//déclaration des fonctions
int PGCD1(int ,int);
int PGCD2(int ,int);


int main(){
	int x,y,z;
	printf("entrez x :");
	scanf("%d",&x); // appel à une fct bibliotheque
	printf("Entrez y : ");
	scanf("%d",&y);
	//cas exception (x,y)=(0,0)
	if(x==0 && y==0){
		puts("situation singuliere");
		return 1; 
	}
	z=PGCD1(x,y);
	printf("PGCD(%d,%d)=%d\n",x,y,z);
	z=PGCD2(x,y);
	printf("PGCD(%d,%d)=%d\n",x,y,z);
	//if(cond) return 1;// synonyme de non achevement du processus
	return 0; //synonyme de l'aboutissement
}

//preconditions
//(a,b)<>0
//a>=b
int PGCD1(int a,int b){
	int d;
	//permutation si b>a
	if(b>a){
		int temp=b;
		b=a;
		a=temp;
	}
	if(b==0)return a;
	d=b;
	while(a%d!=0 || b%d!=0)d--; //--d equiv d-- equi d=d-1 (si seul)
	return d; 
}


int PGCD2(int a,int b){
	//condition d'arret
	if(b==0) return a;
	return PGCD2(b,a%b);
}
