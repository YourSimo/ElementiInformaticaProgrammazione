//
//  main.c
//  Secondo Intero più piccolo
//
//  Created by Simone Cavicchioli on 10/11/15.
//  Copyright © 2015 Simone Cavicchioli. All rights reserved.
//
//  Riempire una sequenza con 100 interi pseudo-casuali compresi tra -50 e +50 (estremi inclusi). Successivamente visualizzare il secondo intero più piccolo tra gli interi presenti nella sequenza.

#include <stdio.h>
#define DIM 100

int main() {
    int x[DIM], i, max1 = 50, max2 = 50;
    for (i = 0; i < DIM; i++) {
        x[i] = rand() % 101 - 50;
        printf("%d\t", x[i]);
        if (x[i] < max1) {
            max2 = max1;
            max1 = x[i];
            
        } else if (x[i] < max2) max2 = x[i];
    }
    printf("\n1° min = %d;\n2° min = %d.\n", max1, max2);
    return 0;
}
