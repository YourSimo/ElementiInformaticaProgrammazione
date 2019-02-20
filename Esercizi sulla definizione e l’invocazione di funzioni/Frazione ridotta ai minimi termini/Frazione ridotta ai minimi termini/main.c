//
//  main.c
//  Frazione ridotta ai minimi termini
//
//  Created by Simone Cavicchioli on 22/11/15.
//  Copyright © 2015 Simone Cavicchioli. All rights reserved.
//
//  Riempire la prima colonna di una tabella di 10 righe con interi pseudo-casuali compresi tra 10 e 100 e la seconda colonna della tabella con interi pseudo-casuali tali che l’intero sulla i-esima riga e seconda colonna della matrice è compreso tra l’intero sulla i-esima riga e prima colonna della matrice e 100. Successivamente interpretando la coppia di interi presenti su ciascuna riga della matrice come il numeratore ed il denominatore di una frazione visualizzare la frazione ridotta ai minimi termini. Per svolgere questo compito si definisca ed utilizzi una funzione C che produce il massimo comune divisore di due dati interi.

#include <stdio.h>

#define DIM_R 10

int MCD(int x, int y)
{
    // MCD (12, 15) --> 3
    int i, min, mcd = 1;
    if (x < y) min = x;
    else min = y;
    
    for (i = 1; i <= min; i++) {
        if (x % i == 0 && y % i == 0) mcd = i;
    }
    return mcd;
}


int main(void)
{
    int a, b, r, x, tab[DIM_R][2];
    
    for (r = 0; r < DIM_R; r++)
    {
        tab[r][0] = rand() % 91 + 10;
        tab[r][1] = rand() % (100 - tab[r][0] + 1) + tab[r][0];
    }
    
    for (r = 0; r < DIM_R; r++)
    {
        x = MCD(tab[r][0], tab[r][1]);
        a = tab[r][0] / x;
        b = tab[r][1] / x;
        printf("%d\t %d\t (%d/%d)\t\n", tab[r][0], tab[r][1], a, b);
    }
    return 0;
}
