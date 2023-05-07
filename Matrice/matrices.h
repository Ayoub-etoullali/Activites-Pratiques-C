#ifndef _MATRICES
    #define _MATRICES
    /* 1er cas
    #define NMAX 100
    typedef double Matrice_t[NMAX][NMAX];
    typedef struct{
        int nl,nc;
        Matrice_t mat;
    }matrice_t;

    matrice_t m1,m2,m3;
*/
typedef struct{
    int nl,nc;
    //double *mat; // il faut allouer nl*nc cases de type double
    double **mat ;//allouer nl pointeurs puis pour pointeur allour nc double
}matrice_t;

void  creerMatrice(matrice_t *);
void scanMatrice(matrice_t *);
void printMatrice(const matrice_t *); // pour eviter une copie (lourde)
matrice_t add(const matrice_t *,const matrice_t *);
matrice_t multi(const matrice_t *,const matrice_t *);

void Trace(const matrice_t *);
/*
Mat2Vect => en justaosant les lignes 
Vect2Mat => vérifier la possibilité de la transformation n1*nc=nbElts 
getTrace 
extractSubMatrice(i,j)  
getBestLigneCol 
getDet 
getInverse 
SolveSys 
vecteur_t

2)MatDoVect

3)vecteur getDiag
get2emeDiag
*/

#endif