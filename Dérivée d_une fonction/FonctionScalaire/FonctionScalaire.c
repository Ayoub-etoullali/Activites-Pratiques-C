//
//  FonctionScalaire.c
//  FonctionScalaire
//
//  Created by Aya Ait on 11/25/21.
//  Copyright © 2021 Aya Ait. All rights reserved.
//

#include "FonctionScalaire.h"
#include <math.h>
#include <assert.h>
#include <stdlib.h>

double f(double x){
    double x2=x*x;
    return (2*x*x2+3)*(x2-1)/sqrt(3*x2+1);
}
double fprime(double x, double h){
    assert(h>0);
    return (f(x+h)-f(x-h))/(2*h);
}
double fseconde(double x,double h){
    return (fprime(x+h,h)-fprime(x-h,h))/(2*h);
}
int getSigne(double x, double h){
    return fseconde(x,h)<0?0:1;
    //0 pour le signe - | 1 pour le signe +
}
void menu(void){
    int choix;
    double x,h,img;
    do{
        system("cls");

        puts("___________ MENU ___________");
        puts("Calcul par f          --->1");
        puts("Calcul par f'         --->2");
        puts("Calcul par f\"         --->3");
        puts("Signe de x par f\"     --->4");
        puts("Quitter               --->5");
        puts("____________________________");
        printf("Votre choix ? : "); scanf("%d",&choix);
        system("cls");
        switch (choix) {
            case 1:
                printf("Entrez x : "); scanf("%lf",&x);
                img=f(x);
                printf("f(%f)=%f\n",x,img);
                break;
            case 2:
                printf("entrez x :"); scanf("%lf",&x);
                do{
                    printf("entrez h :"); scanf("%lf",&h);
                }while (h>H_MAX);
                img=fprime(x, h);
                printf("f'(%f)=%f\n",x,img);
                break;
            case 3:
                printf("entrez x :"); scanf("%lf",&x);
                do{
                    printf("entrez h :"); scanf("%lf",&h);
                }while (h>H_MAX);
                img=fseconde(x, h);
                printf("f\"(%f)=%f\n",x,img);
                break;
            case 4:
                printf("entrez x :"); scanf("%lf",&x);
                do{
                    printf("entrez h :"); scanf("%lf",&h);
                }while (h>H_MAX);
                printf("Signe de f\"(%f) sur %f est %c\n",x,h, getSigne(x, h)?'-':'+');
                break;
            case 5 :
                exit (1);
            default:
                puts("choix invalide! Veuillez refaire.\n");
                break;
        }
        system("pause");
        system("cls");
    }while (1);
    
}
