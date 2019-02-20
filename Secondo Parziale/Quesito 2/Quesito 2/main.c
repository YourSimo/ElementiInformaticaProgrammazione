//
//  main.c
//  Quesito 2
//
//  Created by Simone Cavicchioli on 30/11/15.
//  Copyright © 2015 Simone Cavicchioli. All rights reserved.
//
//  Scrivere un programma C (funzione main) che acquisisca da tastiera una successione di numeri naturali che termina con il primo naturale x positivo e inferiore o uguale a 20; successivamente visualizzare una sequenza di 100 numeri interi pseudo-casuali compresi tra 1 e 20 ed infine il numero di occorrenze di x presenti nella sequenza. Per svolgere questo compito si definisca esclusivamente la funzione principale main.

#include <stdio.h>

#define DIM 100

int main(void) {
    int count = 0, x, i, tmp;
    
    do {
        printf("--> ");
        scanf("%d", &x);
        
    } while (x <= 0 || x > 20);
    
    for (i = 0; i < DIM; i++) {
        tmp = rand() % 20 + 1;
        printf("%d ", tmp);
        if (tmp == x) count++;
    }
    printf("\n%d (%d)\n", x, count);
    
    return 0;
}
