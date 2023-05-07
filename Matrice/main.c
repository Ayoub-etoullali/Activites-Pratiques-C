#include "Matrices.h"
#include "Matrices.c"



int main(){
    matrice_t m1,m2,m3,m4;
    scanMatrice(&m1);
    scanMatrice(&m2);
    m3=add(&m1,&m2);
    printMatrice(&m1);
    printMatrice(&m2);
    printMatrice(&m3);
    printMatrice(&m4);
    Trace(&m1); 
    Vect(&m1);
}
