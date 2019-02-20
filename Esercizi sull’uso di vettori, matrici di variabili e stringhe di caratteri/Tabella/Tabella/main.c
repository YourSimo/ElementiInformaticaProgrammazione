//
//  main.c
//  Tabella
//
//  Created by Simone Cavicchioli on 10/11/15.
//  Copyright © 2015 Simone Cavicchioli. All rights reserved.
//
//  Riempire una tabella di 10 righe e 5 colonne con interi pseudo-casuali compresi tra 0 ed 1 (estremi inclusi). I 5 numeri presenti su ciascuna riga della matrice rappresentano le 5 cifre di un numero binario: la cifra sulla prima colonna della matrice è la più significativa; la cifra sulla quinta colonna della matrice è la meno significativa. Visualizzare la conversione in base 10 dei dieci numeri binari presenti sulle righe della tabella.

#include <stdio.h>
#include <math.h>
#define DIM_R 10
#define DIM_C 5

int main() {
    int tab[DIM_R][DIM_C], dec[DIM_C], i, j, n, k = 5;
    
    for (i = 0; i < DIM_R; i++) {
        for (j = 0; j < DIM_C; j++) {
            // [x,y] : rand() % (y - x + 1)+ x --> [0,1] : rand() % 2 + 0
            tab[i][j] = rand() % 2;
            printf("%d\t", tab[i][j]);
            
            //  V[i]+=M[i][j]*powf(2,DIM2-j-1);
            dec[j] = (tab[i][j] * powf(2, DIM_C-j-1));
            k--;
        }
        printf("%d", dec[0]+dec[1]+dec[2]+dec[3]+dec[4]);
        k = 5;
        printf("\n");
    }
    
    
    return 0;
}
