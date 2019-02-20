//
//  main.c
//  La più Grande e Piccola Potenza di i
//
//  Created by Simone Cavicchioli on 25/11/15.
//  Copyright © 2015 Simone Cavicchioli. All rights reserved.
//
//  Acuisire da tastiera un numero naturale x. Successivamente per ciascun naturale i compreso tra 1 e 10 visualizzare la più grande potenza di i inferiore o uguale a x e la più piccola potenza di i superiore a x (se esiste). Per svolgere questo compito si definisca ed utilizzi una funzione che inizializza gli interi puntati da due dati puntatori con la più grande potenza di un dato intero n inferiore o uguale ad un secondo dato intero l e con la più piccola potenza di n superiore a i.

#include <stdio.h>

void potenze(int *potsup, int *potinf, int base, int limite)
{
    *potinf = 1;
    
    if (base == 1)
    {
        *potinf = 1;
        *potsup = -1;
        return;
    }
    
    while (*potinf * base <= limite) *potinf = *potinf * base;
    
    *potsup = *potinf * base;
}

int main(void)
{
    int x, i, ps, pi;
    printf("-->");
    scanf("%d", &x);
    
    for (i = 1 ; i <= 10; i++)
    {
        potenze(&ps, &pi, i, x);
        if (ps >= 1) printf("%d (%d) - (%d)\n", i, pi, ps);
        else printf("%d (%d) - (non esiste)\n", i, pi);
    }
    return 0;
}
