//
//  main.c
//  Lunghezza Sotto-Sequenza
//
//  Created by Simone Cavicchioli on 18/11/15.
//  Copyright © 2015 Simone Cavicchioli. All rights reserved.
//
//  Riempire una tablella di 10 righe e 20 colonne con interi pseudo-casuali compresi tra 10 e 50. Successivamente acquisire due reali x e y da tastiera. Si consideri le seguenze di interi presenti su ciascuna di riga della tabella. Per ciascuna di queste sequenze di visualizzi la lunghezza della più lunga sotto-sequenza di interi comprese tra x ed y. Per svolgere questo compito si definisca ed utilizzi una funzione che data una sequenza di n variabili intere e date due variabili intere x ed y produca la lunghezza della più lunga sotto-sequenza di interi compresi tra x ed y.

#include <stdio.h>

#define DIMR 10
#define DIMC 20

int subseq(int v[], int n, float min, float max)
{
    int maxlen = 0, cont = 0, i;
    
    for (i = 0; i < n; i++) {
        if (v[i] >= min && v[i] <= max) cont++;
        else cont = 0;
        if (cont > maxlen) maxlen = cont;
    }
    return maxlen;
}

int main(void)
{
    int mat[DIMR][DIMC], i, j;
    float x, y;
    
    for (i = 0; i < DIMR; i++) {
        for (j = 0; j < DIMC; j++) {
            mat[i][j] = rand() % 41 + 10;
            printf("%d\t", mat[i][j]);    // riservo 3 caratteri per ogni intero
        }
        printf("\n");
    }
    printf("--> ");
    scanf("%f", &x);
    printf("--> ");
    scanf("%f", &y);
    
    for (i = 0; i < DIMR; i++) printf("%d\n", subseq(mat[i], DIMC, x, y));

    return 0;
}
