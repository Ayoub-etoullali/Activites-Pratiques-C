#include "Matrices.h"
#include <stdio.h>  // prontf, scanf, gets, getchar
#include <stdlib.h> // pour malloc, calloc, realloc
#include <assert.h> // pour assert

/*matrice_t*/ void creerMatrice(matrice_t *ptrMat)
{
    // matrice_t m;
    double **p;
    /* m.nl=nl;
     m.nc=nc;*/
    // allocation
    // ptrMat=NULL;
    ptrMat->mat = (double **)malloc(ptrMat->nl * sizeof(double *));
    for (p = ptrMat->mat; p < ptrMat->mat + ptrMat->nl; p++)
        *p = (double *)malloc(ptrMat->nc * sizeof(double));
    // return m;
}
void scanMatrice(matrice_t *ptrMat)
{
    double **p, *q;
    printf("Nombre de lignes ? ");
    scanf("%d", &ptrMat->nl);
    printf("Nombre de colones ? ");
    scanf("%d", &ptrMat->nc);
    creerMatrice(ptrMat);
    // la saisie des données de la matrice
    for (p = ptrMat->mat; p < ptrMat->mat + ptrMat->nl; p++)
        for (q = *p; q < *p + ptrMat->nc; q++)
        {
            printf("[%d][%d] = ", (int)(p - ptrMat->mat), (int)(q - *p));
            scanf("%lf", q);
        }
}
void printMatrice(const matrice_t *ptrMat)
{
    double **p, *q;
    puts("Matrice : ");
    printf("\tnbre de lignes = %d\n", ptrMat->nl);
    printf("\tnbre de colonnes = %d\n", ptrMat->nc);
    // la saisie des données de la matrice
    puts("\tValeurs :");
    for (p = ptrMat->mat; p < ptrMat->mat + ptrMat->nl; p++)
    {
        for (q = *p; q < *p + ptrMat->nc; q++)
            printf("%12.0f ", *q);
        puts("");
    }
}
matrice_t add(const matrice_t *ptr1, const matrice_t *ptr2)
{
    matrice_t som;
    double **p1, **p2, **p3, *q1, *q2, *q3;
    assert(ptr1->nl == ptr2->nl && ptr1->nc == ptr2->nc);
    som.nl = ptr1->nl;
    som.nc = ptr1->nc;
    creerMatrice(&som);
    for (p1 = ptr1->mat, p2 = ptr2->mat, p3 = som.mat; p1 < ptr1->mat + ptr1->nl; p1++, p2++, p3++)
        for (q1 = *p1, q2 = *p2, q3 = *p3; q1 < *p1 + ptr1->nc; q1++, q2++, q3++)
            *q3 = *q1 + *q2;
    return som;
}

matrice_t multi(const matrice_t *ptr1, const matrice_t *ptr2)
{
    matrice_t multi;
    double **p1, **p2, **p4, *q1, *q2, *q4;
    assert(ptr1->nc == ptr2->nl);
    multi.nl = ptr1->nl;
    multi.nc = ptr2->nc;
    creerMatrice(&multi);
    for (p1 = ptr1->mat, p2 = ptr2->mat, p4 = multi.mat; p1 < ptr1->mat + ptr1->nl; p1++, p2++, p4++)
    {
        for (q1 = *p1, q2 = *p2, q4 = *p4; q1 < *p1 + ptr1->nc; q1++, q2++, q4++)
            for (p1 = ptr1->mat, p2 = ptr2->mat, p4 = multi.mat; p1 < ptr1->mat + ptr2->nl; p1++, p2++, p4++)
                *q4 += (*q1) * (*q2);
    }
    return multi;
}

void Trace(const matrice_t *ptr)
{
    int i;
    double **p, *q;
    double Trace = 0;
    /* for (p = ptr->mat ; p < ptr->mat + ptr->nl && p=q ; p++)
        Trace += *(p+i); */
    assert(ptr->nl == ptr->nc);

    /* for (p = ptr->mat ; p<ptr->mat+ptr->nl ; p++)
        Trace += **p ; */

    /* for (p = ptr->mat; p < ptr->mat + ptr->nl; p++)
    {
        if (q == *p)
        Trace += *q;
    } */

    for (p = ptr->mat, q = *p; p < ptr->mat + ptr->nl; p++, q++)
    {
        Trace += *q;
    }
    printf("la Trace de la matrice est : %f", Trace);
}
