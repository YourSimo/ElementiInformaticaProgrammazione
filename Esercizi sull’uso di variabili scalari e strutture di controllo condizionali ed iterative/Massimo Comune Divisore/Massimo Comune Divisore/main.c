//
//  main.c
//  Massimo Comune Divisore
//
//  Created by Simone Cavicchioli on 09/11/15.
//  Copyright © 2015 Simone Cavicchioli. All rights reserved.
//
//  Acquisire da tastiera due interi e visualizzare il loro massimo comune divisore.

#include <stdio.h>

int main() {
    int x, y, i, max, mcd;
    
    printf("Inserire il primo intero: ");
    scanf("%d", &x);
    printf("Inserire il secondo intero: ");
    scanf("%d", &y);
    // 2 4   6 8

    if (x < y) max = x;
    else max = y;
    // max = 2, max = 6
    
    for (i = 1; i <= max; i++) {
        if (x % i == 0 && y % i == 0) mcd = i;
    }
    
    printf("Il Massimo Comnue dividore è: [%d]\n", mcd);
    
    return 0;
}
