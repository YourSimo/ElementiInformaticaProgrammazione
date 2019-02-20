//
//  main.c
//  Somma Righe pari e dispari
//
//  Created by Simone Cavicchioli on 23/11/15.
//  Copyright © 2015 Simone Cavicchioli. All rights reserved.
//
//  Riempire e visualizzare una tabella di 10 righe e 10 colonne con interi pseudo-casuali compresi tra 10 e 99 (estremi inclusi). Riempire una sequenza di 10 interi con la somma dei numeri pari presenti su ciascuna riga della tabella ed una sequenza di 10 interi con la somma dei numeri dispari. Per svolgere questo compito si definisca ed utilizzi una funzione C che inizializza gli interi puntati da due dati puntatori a variabile intera con la somma dei numeri pari e dispari presenti in un dato vettore di n variabili intere.

//  inizializza(int p[], int d[], int v[], int n)

//  5   3   2   7   8
//  10  ...
//  15  ...

#include <stdio.h>

#define DIM_R 10
#define DIM_C 10

void somma(int *somma_pari, int *somma_dispari, int v[], int n)
{
    int i;
    for (i = 0; i < n; i++) {
        if (v[i] % 2 == 0) *somma_pari += v[i];
        else *somma_dispari += v[i];
    }
}

int main(void)
{
    int m[DIM_R][DIM_C], r, c, p = 0, d = 0;
    
    for (r = 0; r < DIM_R; r++) {
        for (c = 0; c < DIM_C; c++) {
            m[r][c] = rand() % 90 + 10;
            printf("%d\t", m[r][c]);
        }
        printf("\n");
    }
    
    for (r = 0; r < DIM_R; r++) {
        somma(&p, &d, m[r], DIM_C);
        printf("%d ", p);
    }
    printf("\n");
    
    for (r = 0; r < DIM_R; r++) {
        somma(&p, &d, m[r], DIM_C);
        printf("%d ", d);
    }
    printf("\n");
    return 0;
}
