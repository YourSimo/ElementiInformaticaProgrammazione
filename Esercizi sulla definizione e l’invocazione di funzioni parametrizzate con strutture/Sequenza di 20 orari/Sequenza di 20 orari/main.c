//
//  main.c
//  Sequenza di 20 orari
//
//  Created by Simone Cavicchioli on 21/12/15.
//  Copyright © 2015 Simone Cavicchioli. All rights reserved.
//
//  Riempire e visualizzare una sequenza con 20 orari (ore, minuti e secondi) pseudo-casuali; successivamente acquisire un orario e visualizzare il suo orario più prossimo tra quelli nella sequenza. Per svolgere questo compito si definisca ed utilizzi 3 funzioni C con le seguenti finalità:
//  -   Produrre la quantità di secondi trascorsi tra la mezzanotte (00:00:00) e un dato orario.
//  -   Produrre un orario (valido) le cui ore, minuti e secondi sono interi pseudo-casuali.
//  -   Produrre un primo dato orario se questo è più prossimo ad un dato orario di riferimento rispetto ad un secondo dato orario; produrre il secondo dato orario altrimenti.

#include <stdio.h>
#include <stdlib.h>

#define DIM 20

typedef struct
{
    int h, m, s;
} Orario;

int secondiTrascorsi(Orario o)
{
    return o.h * 3600 + o.m * 60 + o.s;
}


Orario inizializza(void)
{
    Orario o;
    o.h = rand() % 23;
    o.m = rand() % 59;
    o.s = rand() % 59;
    
    return o;
}

Orario piùProssimo(Orario o1, Orario o2, Orario rif)
{
    int totdelta1, totdelta2;
    
    totdelta1 = abs(secondiTrascorsi(rif) - secondiTrascorsi(o1));  //  valore assoluto
    totdelta2 = abs(secondiTrascorsi(rif) - secondiTrascorsi(o2));
    
    if (totdelta1 <= totdelta2) return o1;
    return o2;
}

int main(void)
{
    int i;
    Orario v[DIM], ref, prox;
    
    for (i = 0; i < DIM; i++) {
        v[i] = inizializza();
        printf("%02d:%02d:%02d ", v[i].h, v[i].m, v[i].s);
    }
    printf("\n---> ");
    scanf("%d:%d:%d", &ref.h, &ref.m, &ref.s);
    
    prox = v[0];
    
    for (i = 1; i < DIM; i++) prox = piùProssimo(prox, v[i], ref);
    
    printf("ORARIO PIU' PROSSIMO: %02d:%02d:%02d\n", prox.h, prox.m, prox.s);
    
    return 0;
}
