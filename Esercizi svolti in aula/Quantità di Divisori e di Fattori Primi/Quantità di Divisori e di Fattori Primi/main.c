//
//  main.c
//  Quantità di Divisori e di Fattori Primi
//
//  Created by Simone Cavicchioli on 02/12/15.
//  Copyright © 2015 Simone Cavicchioli. All rights reserved.
//
//  Acquisire da tastiera un numero naturale n. Visualizzare la quantità di divisori e di fattori primi di ciascun naturale tra 2 e n. Per svolgere questo compito si definisca e utilizzi una funzione che inizializza due dati puntatori a variabili ...

#include <stdio.h>

void fattorizza(int n, int *div, int *fatt)
{
    int i;
    *div = 0;
    *fatt = 0;
    
    for (i = 1; i <= n; i++) {
        if (n % i == 0) *div = *div + 1;
    }
    for (i = 2; i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0) {
                n = n / i;
            }
            *fatt = *fatt + 1;
        }
    }
    
}


int main(void)
{
    int n, i, nDiv, nFatt;
    
    printf("--> ");
    scanf("%d", &n);
    
    for (i = 2; i <= n; i++)
    {
        fattorizza(i, &nDiv, &nFatt);
        printf("%d: (%d) %d\n", i, nDiv, nFatt);
    }
    return 0;
}
