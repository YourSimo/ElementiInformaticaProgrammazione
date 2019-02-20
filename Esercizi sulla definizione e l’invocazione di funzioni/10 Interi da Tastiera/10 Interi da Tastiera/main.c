//
//  main.c
//  10 Interi da Tastiera
//
//  Created by Simone Cavicchioli on 21/11/15.
//  Copyright © 2015 Simone Cavicchioli. All rights reserved.
//
//  Riempire una sequenza con 10 interi acquisiti da tastiera e successivamente visualizzare per ciascun intero pari x nella sequenza la coppia di numeri primi la cui somma è uguale ad x. Per svolgere questo compito si definiscano ed utilizzino due funzioni C con le seguenti finalità:
//  -   Produrre 1 se un dato intero è primo e produrre 0 altrimenti.
//  -   Inizializzare gli interi puntati da due dati puntatori a variabile intera con i due numeri primi la cui somma è pari ad un dato intero.

//  intero pari (12) --> 2 + 2, 3, 5, 7, 11 = 13 --> 3 + 2, 3, 5, 7, 11 = 14 --> 5 + 2, 3, 5, 7 = [12]

#include <stdio.h>

#define DIM 10

int primo(int p)
{
    int k;
    
    for (k = 2; k < p; k++) {
        if (p % k == 0) return 0;
    }
    return 1;
}


void somma(int *a, int *b, int x)
{
    int i, j;
    
    for (i = 2; i < x; i++) {
        if (primo(i) == 1) {
            
            for (j = 2; j < x; j++) {
                if (primo(j) == 1) {
                    if (i + j == x) {
                        *a = i;
                        *b = j;
                        return;
                    }
                }
            }
        }
    }
}


int main(void)
{
    int a, b, i, v[DIM];
    
    for (i = 0; i < DIM; i++) scanf("%d", &v[i]);
    
    for (i = 0; i < DIM; i++) {
        if (v[i] % 2 == 0) {
            somma(&a, &b, v[i]);
            printf("%d + %d = %d\n", a, b, v[i]);
        }
        
    }
    
    return 0;
}
