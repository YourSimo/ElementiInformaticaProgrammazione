//
//  main.c
//  MCD Algoritmo Euclide
//
//  Created by Simone Cavicchioli on 10/11/15.
//  Copyright © 2015 Simone Cavicchioli. All rights reserved.
//
//  Acquisire da tastiera due interi e visualizzare il loro massimo comune divisore, calcolato utilizzando l’algoritmo di Euclide.

#include <stdio.h>

int main() {
    int x, y;
    printf("Inserire il primo intero: ");
    scanf("%d", &x);
    printf("Inserire il secondo intero: ");
    scanf("%d", &y);
    while (x != y) {
        if (x > y) x = x - y;
        else y = y - x;
    }
    printf("MCD = [%d]\n", x);
    return 0;
}
