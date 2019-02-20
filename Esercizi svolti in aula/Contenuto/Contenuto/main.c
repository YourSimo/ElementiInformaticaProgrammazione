//
//  main.c
//  Contenuto
//
//  Created by Simone Cavicchioli on 23/12/15.
//  Copyright © 2015 Simone Cavicchioli. All rights reserved.
//
//  Acquisire da tastiera una successione di 5 interi o una successione di lunghezza inferiore e che termina con zero. Successivamente si consideri 5 sequenze di 20 interi pseudo-casuali compresi tra 1 e 3. Per ciascuna di queste sequenze si visualizzi quante volte vi compare la successione di interi acquisiti (zero escluso). Per svolgere questo compito definire ed utilizzare due funzioni con le seguenti finalità:
//  -   Produrre 1 se due dati vettori di n variabili intere sono uguali
//  -   Produrre la quantita' di volte un dato vettore di n1 variabili intere e' contenuto in un secondo dato vettore di n2 variabili intere.

//  6   5   2   3   (4)
//  5   2   3       (3) --> 1


#include <stdio.h>

#define DIM 5

int vettoriUguali(int v1[], int v2[], int n)
{
    int i;
    
    for (i = 0; i < n; i++) {
        if (v1[i] != v2[i]) return 0;
    }
    return 1;
}

int quantità(int v1[], int n1, int v2[], int n2)
{
    int i, count = 0;
    
    for (i = 0; i <= n1 - n2; i++) {
        if (vettoriUguali(&v1[i], v2, n2) == 1) count++;
    }
    return count;
}

int main(void)
{
    int n = 0, i, j, v[DIM], m[5][20];
    
    do {
        scanf("%d", &v[n]);
        n++;
    } while (v[n - 1] != 0 && n < 5);
    
    if (v[n - 1] == '\0') n--;
    
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 20; j++) {
            m[i][j] = rand() % 3 + 1;
            printf("%d\t", m[i][j]);
            
        }
        printf("\n");
    }
    for (i = 0; i < 5; i++) {
        printf("%d\n", quantità(m[i], 20, v, n));
    }
    
    return 0;
}
