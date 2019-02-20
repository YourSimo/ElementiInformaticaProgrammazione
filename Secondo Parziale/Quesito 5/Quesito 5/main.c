//
//  main.c
//  Quesito 5
//
//  Created by Simone Cavicchioli on 30/11/15.
//  Copyright © 2015 Simone Cavicchioli. All rights reserved.
//
//  Scrivere un programma C che acquisisca da tastiera 10 date del calendario e successivamente visualizzi il numero di date acquisite che precedono l’ultima data acquisita. Per svolgere questo compito si dichiari una nuova tipologia di dati adatta ai fini dell’esercizio e si definisca ed utilizzi due funzioni C con le seguenti finalità:
//  -   Produrre 1 se una data data del calendario precede una seconda data data del calendario.
//  -   Produrre la quantità di date del calendario in una data sequenza di n date del calendario che precedono una data data del calendario.

//  06/09/1996
//  20/07/2002

#include <stdio.h>

#define DIM 3

typedef struct
{
    int g, m, a;
} Data;

int precede(Data v1, Data v2)
{
    if (v1.a < v2.a) return 1;
    else if (v1.a == v2.a)
    {
        if (v1.m < v2.m) return 1;
        else if (v1.m == v2.m)
        {
            if (v1.g < v2.g) return 1;
        }
    }
    return 0;
}

int quantità(Data v1[], Data ref, int n)
{
    int i, q = 0;
    
    for (i = 0; i < n; i++) {
        if(precede(v1[i], ref) == 1) q++;
    }
    return q;
}


int main(void) {
    Data v[DIM];
    int i;
    
    for (i = 0; i < DIM; i++) {
        scanf("%d/%d/%d", &v[i].g, &v[i].m, &v[i].a);
    }
    
    printf("%d\n", quantità(v, v[DIM - 1], DIM));
    
    return 0;
}
