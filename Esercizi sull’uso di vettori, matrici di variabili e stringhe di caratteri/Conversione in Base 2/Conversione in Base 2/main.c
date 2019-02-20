//
//  main.c
//  Conversione in Base 2
//
//  Created by Simone Cavicchioli on 10/11/15.
//  Copyright © 2015 Simone Cavicchioli. All rights reserved.
//
//  Acquisire da tastiera una successioni di interi che termina con il primo numero positivo e minore di 1024 immesso. Successivamente visualizzare la conversione in base 2 dell’ultimo intero acquisito.

#include <stdio.h>
#define DIM 10

int main() {
    int i = 0, j, x, v[DIM];
    do {
        printf("Inserire un intero compreso tra ]0,1024[ : ");
        scanf("%d", &x);
        if (x <= 0) printf("L'intero inserito è negativo o uguale a 0!\n");
        else if (x >= 1024) printf("L'intero inserito è superiore a 1023!\n");
        
    } while (x <= 0 || x >= 1024);
    
    // 1024 = 2^10
    
    // --> 12
    // --> 12 / 2 = 6 r [0] 0
    // -->  6 / 2 = 3 r [0] 1
    // -->  3 / 2 = 1 r [1] 2
    // -->  1 / 2 = 0 r [1] 3
    //                      4
    
    do {
        v[i] = x % 2;
        x = x / 2;
        i++;
    } while (x > 0);

    printf("L'intero in forma binaria: [ ");
    for (j = i - 1; j >= 0; j--) printf("%d ", v[j]);
    printf("]\n");
    return 0;
}
