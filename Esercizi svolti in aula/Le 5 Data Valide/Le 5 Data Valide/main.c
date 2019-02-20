//
//  main.c
//  Le 5 Data Valide
//
//  Created by Simone Cavicchioli on 20/11/15.
//  Copyright © 2015 Simone Cavicchioli. All rights reserved.
//
//  Acquisire da tastiera una successione di date del calendario che termina con la quinta data valida acquisita. Successivamente visualizzi le cinque date valide acquisite. Per svolgere questo compito si definisca ed utilizzi tre funzioni C con le seguenti finalità:
//  -   produrre 1 se un dato anno è bisestile e o altrimenti,
//  -   produrre 1 se una data data del calendario e valida e 0 altrimenti.
//  -   visualizzare le date in un dato vettore di n date nel calendario.

#include <stdio.h>
#define DIM 5

typedef struct
{
    int g, m, a;
} Data;

int bisestile(int anno)
{
    if ((anno % 100 != 0 && anno % 4 == 0) || anno % 400 == 0) return 1;
    else return 0;
}

int valida(Data d)
{
    int giorni[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    if (bisestile(d.a) == 1) giorni[1] = 29;
        
    if (d.a >= 0 && d.a <= 99 && d.m >= 1 && d.m <= 12 && d.g >= 1 && d.g <= giorni[d.m - 1]) return 1;
    else return 0;
}


void visualizza(Data vd[], int n)
{
    int i;
    
    for (i = 0; i < n; i++) printf("%d/%d/%d", vd[i].g, vd[i].m, vd[i].a);
}

int main(void)
{
    Data vd[DIM];
    int i = 0;
    
    do {
        scanf("%d/%d/%d", &vd[i].g, &vd[i].m, &vd[i].a);
        
        if (valida(vd[i]) == 1) i++;
        
    } while (i < DIM);
    
    visualizza(vd, DIM);
    
    return 0;
}
