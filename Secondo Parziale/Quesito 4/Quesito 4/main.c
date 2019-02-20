//
//  main.c
//  Quesito 4
//
//  Created by Simone Cavicchioli on 30/11/15.
//  Copyright © 2015 Simone Cavicchioli. All rights reserved.
//
//  Scrivere un programma C che acquisisca 5 numeri naturali e successivamente per ciascuno numero x acquisito si visualizzi la x-esima potenza di 2. Per svolgere questo compito si definisca ed utilizzi una funzione che per ciascun intero x in un dato vettore di n variabili intere visualizzi la x-esima potenza di 2. È vietato l’utilizzo delle funzionalità disponibili tramite la libreria math.h.

//  2^(x)
//  2 --> 2*2

#include <stdio.h>

#define DIM 5

void potenza(int v[], int n)
{
    int i, p, j;
    for (i = 0; i < n; i++) {
        p = 1;
        if (v[i] > 1) {
            for (j = 2; j <= v[i]; j++) p *= 2;
        }
        printf("2^(%d) = (%d)\n", v[i], p);
        
    }
}


int main(void)
{
    int i, v[DIM];
    
    for (i = 0; i < DIM; i++) {
        scanf("%d", &v[i]);
    }
    potenza(v, DIM);
    
    return 0;
}
