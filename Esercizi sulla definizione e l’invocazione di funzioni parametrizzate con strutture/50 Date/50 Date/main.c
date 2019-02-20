//
//  main.c
//  50 Date
//
//  Created by Simone Cavicchioli on 03/12/15.
//  Copyright © 2015 Simone Cavicchioli. All rights reserved.
//
//  Riempire e visualizzare una sequenza con 50 date del calendario pseudo-casuali; successivamente visualizzare la data più remota tra quelle nella sequenza. Per svolgere questo compito si definisca ed utilizzi 3 funzioni C con le seguenti finalità:
//  -   Produrre 1 se un dato intero rappresenta un anno bisestile e produrre 0 altrimenti.
//  -   Produrre 1 se una data data del calendario precede una seconda data data del calendario e produrre 0 altrimenti.
//  -   Produrre una data (valida) del calendario i cui giorni, mesi sono interi pseudo-casuali appropriati e l’anno è un intero pseudo-casuale compreso tra il 1900 ed il 2014 (estremi inclusi).

#include <stdio.h>

#define DIM 50

typedef struct {
    int g, m, a;
} Data;

int bisestile(int anno)
{
    if (anno % 400 == 0 || (anno % 100 != 0 && anno % 4 == 0)) return 1;
    else return 0;
}

//  d1 --> d2

//  1/1/2001 3/1/2001 2/1/2001

int precede(const Data d1,const Data d2)
{
    if (d1.a < d2.a || (d1.a == d2.a && d1.m < d2.m) || (d1.a == d2.a && d1.m == d2.m && d1.g < d2.g)) return 1;
    
    return 0;
}


Data inzializza(void)
{
    Data dataValida;
    
    int gg[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    dataValida.a = rand() % 115 + 1900;
    dataValida.m = rand() % 12 + 1;
    
    if (bisestile(dataValida.a) == 1 && dataValida.m == 2) dataValida.g = rand() % 29 + 1;
    
    else dataValida.g = rand() % gg[dataValida.m - 1] + 1;
    
    return dataValida;
}

int main(void)
{
    int i;
    Data v[DIM], remota;
    
    for (i = 0; i < DIM; i++) {
        v[i] = inzializza();
        printf("%d/%02d/%04d ", v[i].g, v[i].m, v[i].a);
    }
    printf("\n");
    remota = v[0];
    
    for (i = 1; i < DIM; i++) {
        if (precede(v[i], remota) == 1) {
            remota = v[i];
        }
    }
    printf("REMOTA : %d/%02d/%04d\n", remota.g, remota.m, remota.a);
    
    
}






























/*  typedef struct
{
    int d, m, y;
} Data;

int bisestile(int year)
{
    if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0)) return 1;
    else return 0;
}

int precede(Data a, Data b);

void inizializza(Data v[])
{
    v[0].y = rand() % 115 + 1900;
    v[0].m = rand() % 12 + 1;
    if (v[0].m == 4 || v[0].m == 6 || v[0].m == 9 || v[0].m == 11) {
        v[0].d = rand() % 30 + 1;
    }
    else if (v[0].m == 2) {
        if (v[0].y == 1) {
            v[0].d = rand() % 29 + 1;
        }
        else v[0].d = rand() % 28 + 1;
    }
    else v[0].d = rand() % 31 + 1;
    
}

int main(void)
{
    int i;
    Data v[DIM];
    
    for (i = 0; i < DIM; i++) {
        inizializza(v);
        printf("%d/%d/%d ", v[i].d, v[i].m, v[i].y);
    }
    
    return 0;
}
*/