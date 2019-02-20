//
//  main.c
//  Quesito 3
//
//  Created by Simone Cavicchioli on 16/02/16.
//  Copyright © 2016 Simone Cavicchioli. All rights reserved.
//
//  Scrivere un programma C che acquisisca 5 numeri naturali e successivamente per ciascuno numero x acquisito si visualizzi la x-esima potenza di 2. Per svolgere questo compito si definisca ed utilizzi una funzione che per ciascun intero x in un dato vettore di n variabili intere visualizzi la x-esima potenza di 2. È vietato l’utilizzo delle funzionalità disponibili tramite la libreria math.h.

//  3   5   8   9   4
//  2^3 2^5 ...
//  2•2•2   ...



#include <stdio.h>
#include <stdlib.h>

#define DIM 5

void potenza(int v[], int n) {
    int i, p, ris;
    for (i = 0; i < n; i++) {
        ris = 1;
        for (p = 1; p <= v[i]; p++) {
            ris = ris * 2;
        }
        printf("%d ", ris);
        
    }
}


int main(void) {
    int v[DIM], i;
    
    for (i = 0; i < DIM; i++) {
        scanf("%d", &v[i]);
    }

    potenza(v, DIM);
    
    system("pause");
    return 0;
}
