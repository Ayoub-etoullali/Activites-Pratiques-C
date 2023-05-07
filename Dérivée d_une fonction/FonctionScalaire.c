#include"FonctionScalaire.h"
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>


double f(double x){
    double x2=x*x;
    return (2*x*x2+3)*(x2-1)/sqrt(3*x2+1);
}

double fPrime(double x,double h){
    assert(h>0);
    return (f(x+h)-f(x-h))/(2*h);
}

double fSeconde(double x,double h ){
    assert(h>0);
    return (fPrime(x+h,h)-fPrime(x-h,h))/(2*h);
}
int getSgnFSeconde(double x, double h){
    return fSeconde(x,h)>=0; // 0 pour le signe - et 1 pour le signe +
}
void menu(){
    int choix,sgn;
    double x,h,img;
    do{
        system("cls");
        puts("\tCalcul par f          ----- >   1");
        puts("\tCalcul par f'         ----- >   2");
        puts("\tCalcul par f\"         ----- >   3");
        puts("\tCalcul du signe de f\" ----- >   4");
        puts("\tQuitter               ----- >   5");
        printf("\n\tVotre choix ? ");scanf("%d",&choix);
        system("cls");
        switch(choix){
            case 1: 
                printf("\tEntrez x : "); scanf("%lf",&x);
                img=f(x);
                printf("\tf(%.3f)=%.3f\n",x,img);
                break;
            case 2:
                printf("\tEntrez x : "); scanf("%lf",&x);
                do {
                    printf("\tEntrez h : "); scanf("%lf",&h);
                }while(h>H_MAX);
                img=fPrime(x,h);
                printf("\tf'(%.3f)=%.3f\n",x,img);
                break;
            case 3:
                printf("\tEntrez x : "); scanf("%lf",&x);
                do {
                    printf("\tEntrez h : "); scanf("%lf",&h);
                }while(h>H_MAX);
                img=fSeconde(x,h);
                printf("\tf\"(%.3f)=%.3f\n",x,img);
                break;
            case 4:
                printf("\tEntrez x : "); scanf("%lf",&x);
                do {
                    printf("\tEntrez h : "); scanf("%lf",&h);
                }while(h>H_MAX);
                ;
                printf("\tSigne de f\"(%.3f)=%c\n",x,getSgnFSeconde(x,h)?'+':'-');
                break;
            case 5:
                exit(1);
            default:
                puts("\tMauvais choix, refaire");
        }
         printf("\n\t");system("pause");
    }while(1);
}