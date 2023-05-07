//directives
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 100 // taille maximale des listes


// signatures des fonction
/*
	param1 : la liste --> un tableau non contraint
	param2 : la taille de la liste
	param3 : la valeur recherchée
	rechSeq : effectue la recheche sequentielle
	pre-cond : aucune
*/
int rechSeq(int [],int , int );
 
 // pré-condition : liste ordonnée
int rechBin(int [],int,int ,int);

void initAlea1(int [], int);
void initAlea2(int [], int);

void afficher(int [] ,int);


//implémentation


int main(){
	int liste1[N],liste2[N]; // tableaux de taille fixe
	int x;// valeur recherchée
	int pos; // la position dans la liste de la valeur x 
	initAlea1(liste1,N);
	initAlea2(liste2,N);
	afficher(liste1,N);
	printf("entrez l'eniter x : ");
	scanf("%d",&x);
	pos=rechSeq(liste1,N,x);
	if(pos>=0)
		printf("la valeur %d se trouve a %d\n",x,pos);
	else
		printf("la valeur %d n'appartient pas a la liste");
	afficher(liste2,N);
	printf("entrez l'eniter x : ");
	scanf("%d",&x);	
	pos=rechBin(liste2,0,N-1,x);
	if(pos>=0)
		printf("la valeur %d se trouve a %d\n",x,pos);
	else
		printf("la valeur %d n'appartient pas a la liste");
	return 0;
}

int rechSeq(int t[],int n , int x ){
	int i=0;
	while(i<n && t[i]!=x)i++;
	return (i<n) ? i:-1;
}
// formulation récursive --> algorithme Diviser pour regner
int rechBin(int t[],int g ,int d, int x){
	int m; ///la position  milieu
	if(g>d) return -1;
	m=(g+d)/2;
	if(x==t[m]) return m;
	if(x<t[m]) return rechBin(t,g,m-1,x);
	return rechBin(t,m+1,d,x);
}

void initAlea1(int t[], int n){
	int i;
	srand(time(NULL)); // reinitialiser le jeu des valeurs alétoire
	for(i=0;i<n;i++) t[i]=rand()%20;
}

void initAlea2(int t[], int n){
	int i;
	srand(time(NULL)); 
	t[0]=rand()%20;
	for(i=1;i<n;i++)t[i]=t[i-1]+rand()%10;
}

void afficher(int t[] ,int n){
	int i;
	for(i=0;i<n;i++) printf("%4d",t[i]);
	puts("");// printf("\n")
}


