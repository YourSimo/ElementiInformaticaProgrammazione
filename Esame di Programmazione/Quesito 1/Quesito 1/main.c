//
//  main.c
//  Quesito 1
//
//  Created by Simone Cavicchioli on 14/02/16.
//  Copyright © 2016 Simone Cavicchioli. All rights reserved.
//
//  Scrivere un programma C (funzione main) che acquisisca da tastiera una successione di numeri naturali che termina con il primo naturale x positivo e inferiore o uguale a 20; successivamente visualizzare una sequenza di 100 numeri interi pseudo-casuali compresi tra 1 e 20 ed infine il numero di occorrenze di x presenti nella sequenza. Per svolgere questo compito si definisca esclusivamente la funzione principale main.

#include <stdio.h>
#include <stlib.h>

#define DIM 100

int main(void) {
    int x, s;
    
    do {
        Scanf("%d", &x);
    } while (x > 20 || x <= 0);
    
    for (i = 0; i < DIM; i++) {
        s = rand() % 20
        printf("%d", )
    }
    
}
