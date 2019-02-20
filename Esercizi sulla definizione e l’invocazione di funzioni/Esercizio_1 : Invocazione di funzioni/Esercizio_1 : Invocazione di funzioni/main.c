//
//  main.c
//  Esercizio_1 : Invocazione di funzioni
//
//  Created by Simone Cavicchioli on 21/11/15.
//  Copyright © 2015 Simone Cavicchioli. All rights reserved.
//
//  Riempire una sequenza con 10 interi pseudo-casuali compresi tra 2 e 100 (estremi inclusi) e visualizzare i numeri primi contenuti nella sequenza in ordine contrario rispetto a quello di apparizione nella sequenza. Per svolgere questo compito si definisca e utilizzi una funzione C che produce 1 se un dato intero è primo e produce 0 altrimenti.

#include <stdio.h>

#define DIM 10

int numero_primo(int x)
{
    int j, div = 0;
    
    for (j = 2; j <= x; j++) {
        if (x % j == 0) {
            div++;
        }
    }
    
    if (div > 1) return 0;
    else return 1;
}

int main(void)
{
    int v[DIM], i;
    
    //  [2,100] --> rand() % (y - x + 1) + x
    
    for (i = 0; i < DIM; i++) {
        v[i] = rand() % 99 + 2;
        printf("%d ", v[i]);
    }
    printf("\n");
    
    for (i = DIM - 1; i >= 0; i--) {
        if (numero_primo(v[i]) == 1) {
            printf("%d ", v[i]);
        }
    }
    printf("\n");
    
    return 0;
}
