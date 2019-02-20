//
//  main.c
//  Quantità di Divisori
//
//  Created by Simone Cavicchioli on 02/12/15.
//  Copyright © 2015 Simone Cavicchioli. All rights reserved.
//
//  Acquisisci da tastiera un numero naturale n. Visualizza la quantità di divisori di ciascun naturale tra 2 e n. Per svolgere questo compito si definisca ed utilizzi una funzione che produce la quantità di divisori di un dato intero.

#include <stdio.h>

int divisori(int n)
{
    int count = 0, i;
    for (i = 1; i <= n; i++) {
        if (n % i == 0) count++;
    }
    return count;
}


int main(void)
{
    int n, i;
    
    printf("--> ");
    scanf("%d", &n);
    
    for (i = 2; i <= n; i++) {
        printf("%d: %d\n", i, divisori(i));
    }
    return 0;
}
