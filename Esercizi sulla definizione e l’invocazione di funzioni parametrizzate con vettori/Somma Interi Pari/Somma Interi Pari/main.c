//
//  main.c
//  Somma Interi Pari
//
//  Created by Simone Cavicchioli on 23/11/15.
//  Copyright © 2015 Simone Cavicchioli. All rights reserved.
//
//  Riempire e visualizzare una tabella di 10 righe e 5 colonne con interi pseudo-casuali compresi tra 1 e 9 (estremi inclusi). Successivamente riempire e visualizzare una sequenza di 10 interi con la somma dei numeri pari presenti su ciascuna riga della matrice. Per svolgere questo compito si definiscano ed utilizzino tre funzioni C con le seguenti finalità:
//  -   Riempire un dato vettore di n variabili intere con interi pseudo-casuali compresi tra due dati interi.
//  -   Visualizzare un dato vettore di n variabili intere.
//  -   Produrre la somma dei numeri pari in un dato vettore di n variabili intere.

//  5   (6)   7   (4)   (2)   =   12

//  -   inizializza(int v[] int n, int a, int b);
//  -   visualizza(const int v[], int n);   const --> sola lettura (evita modifiche indesiderate)
//  -   somma(int v[], int n);

//  int *p == int p[]
//  &p == p

#include <stdio.h>

#define DIM_R 10
#define DIM_C 5

void inizializza(int v[], int n, int min, int max)
{
    int i;
    for (i = 0; i < n; i++) v[i] = rand() % (max - min + 1) + min;
}


void visualizza(const int v[], int n)
{
    int i;
    for (i = 0; i < n; i++) printf("%d\t", v[i]);
}


int somma_pari(int v[], int n)
{
    int i, somma = 0;
    for (i = 0; i < n; i++) {
        if (v[i] % 2 == 0) {
            somma += v[i];
        }
    }
    return somma;
}


int main(void)
{
    int r, m[DIM_R][DIM_C];
    
    for (r = 0; r < DIM_R; r++) {
        inizializza(m[r], DIM_C, 1, 9);
        visualizza(m[r], DIM_C);
        printf("=  %d", somma_pari(m[r], DIM_C));
        printf("\n");
    }
/*    printf("------------------\n");
    for (r = 0; r < DIM_R; r++) {
        
        printf("%d ", somma_pari(m[r], DIM_C));
    }
*/
    printf("\n");
    return 0;
}
