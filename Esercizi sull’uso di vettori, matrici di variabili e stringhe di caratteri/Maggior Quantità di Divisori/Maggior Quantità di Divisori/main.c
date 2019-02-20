//
//  main.c
//  Maggior Quantità di Divisori
//
//  Created by Simone Cavicchioli on 19/11/15.
//  Copyright © 2015 Simone Cavicchioli. All rights reserved.
//
//  Acquisire da tastiera una successioni di interi che termina con il primo intero x compreso tra 10 e 100 (estremi esclusi) immesso. Successivamente riempire una sequenza con 20 interi pseudo-casuali compresi tra 10 (incluso) ed x (escluso). Infine visualizzare l’intero nella sequenza che ha la maggior quantità di propri divisori.

#include <stdio.h>

#define DIM 20

int main()
{
    int x, i, j, v[DIM], numdiv, divmax = 0, M;
    
    do
    {
        printf("Inserire un intero ]10,100[ : ");
        scanf("%d", &x);
    } while (x <= 10 && x >= 100);
    
    for (i = 0; i < DIM; i++)
    {
        // [x,y] : rand() % (y - x + 1)+ x --> [10,n-1] : rand() % x - 1 - 9 + 10

        v[i] = rand() % (x - 10) + 10;
        printf("%3d", v[i]);
        
        numdiv = 0;
        
        for (j = 2; j < v[i]; j++) {
            if (v[i] % j == 0) numdiv++;
        }
        
        printf(" (%d);", numdiv);
        
        if (numdiv > divmax) {
            divmax = numdiv;
            M = v[i];
        }
    }
    
    printf("\nL'intero con maggior divisori è : %d (%d)\n", M, divmax);
    
    return 0;
}
