//
//  main.c
//  Quesito 3
//
//  Created by Simone Cavicchioli on 30/11/15.
//  Copyright © 2015 Simone Cavicchioli. All rights reserved.
//
//  Scrivere un programma C che visualizzi la quantità di divisori di 10 numeri naturali acquisiti da tastiera. Per svolgere questo compito si definisca ed utilizzi una funzione che produca la quantità di divisori di un dato intero.

#include <stdio.h>

int divisori(int x)
{
    int i, div = 0;
    
    for (i = 1; i <= x; i++) {
        if (x % i == 0) {
            div++;
        }
    }
    return div;
}

int main(void)
{
    int n = 0, x;
    
    while (n < 10) {
        printf("--> ");
        scanf("%d", &x);
        printf("%d (%d)\n", x, divisori(x));
        n++;
    }
    return 0;
}
