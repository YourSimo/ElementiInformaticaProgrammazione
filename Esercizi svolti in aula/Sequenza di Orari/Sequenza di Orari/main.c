//
//  main.c
//  Sequenza di Orari
//
//  Created by Simone Cavicchioli on 20/11/15.
//  Copyright © 2015 Simone Cavicchioli. All rights reserved.
//
//  Riempire una sequenza con 10 orari, i minuti e le ore di ciascuna dei quali è un intero pseudo-casuale compreso rispettivamnete tra 0 e 59 e tra 0 e 23. Successivamente acquisire due orari (hh:mm) x ed y da tastiera. Rimuovere dalla sequenza gli orari che non sono compresi tra x e y e visualizzare la sequenza risultante. Per svolgere questo compito si definiscano 4 funzioni con le seguenti finalità:
//  -   produrre 1 se un dato orario è inferiore ad un dato secondo orario;
//  -   rimuovere da una data sequenza di orari, gli orari che non sono compresi tra due dati orari producendo il nuovo numero di orari nella sequenza;
//  -   visualizzare una data sequenza di orari.

#include <stdio.h>

#define DIM 10

typedef struct
{
    int m, h;
} Orario;

int precede(Orario o1, Orario o2)
{
    if (o1.h < o2.h || (o1.h == o2.h && o1.m < o2.m)) return 1;
    else return 0;
}


int rimouvi(Orario v[], int n, Orario min, Orario max)
{
    int i = 0, j;
    
    while (i < n) {
        
        if (precede(v[i], min) == 1 || precede(max, v[i]) == 1)
        {
            for (j = i; j < n - 1; j++) v[j] = v[j + 1];
            n = n - 1;
        }
        else i = i + 1;
    }
    return n;
}


void visualizza(Orario v[], int n)
{
    int i;
    
    for (i = 0; i < n; i++) printf("%d:%02d\n", v[i].h, v[i].m);
}


int main(void)
{
    Orario vo[DIM], inizio, fine;   //  variabile struttura Orario
    int i, n;
    
    for (i = 0; i < DIM; i++)
    {
        vo[i].m = rand() % 60;
        vo[i].h = rand() % 24;
    }
    visualizza(vo, DIM);
    
    scanf("%d:%d", &inizio.h, &inizio.m);
    scanf("%d:%d", &fine.h, &fine.m);
    
    
    
    n = rimouvi(vo, DIM, inizio, fine);
    
    visualizza(vo, n);
    return 0;
}
