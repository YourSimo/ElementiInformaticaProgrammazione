//
//  main.c
//  La più Grande Potenza di i
//
//  Created by Simone Cavicchioli on 25/11/15.
//  Copyright © 2015 Simone Cavicchioli. All rights reserved.
//
//  Acquisire da tastiera un numero x. Successivamente per ciascun naturale i compreso tra 1 e 10 visualizzare la più grande potenza di i inferiore o uguale a x. Per sovlgere che produce la più grande potenza di un dato intero inferiore o uguale ad un secondo dato intero (positivo).

#include <stdio.h>

int potenza(int base, int limite)
{
    int risultato = 1;
    
    if (base == 1) return 1;
    while (risultato * base <= limite) risultato = risultato * base;
    return risultato;
}

int main(void)
{
    int x, i;
    printf("-->");
    scanf("%d", &x);
    
    for (i = 1 ; i <= 10; i++) printf("%d: (%d)\n", i, potenza(i, x));
    return 0;
}
