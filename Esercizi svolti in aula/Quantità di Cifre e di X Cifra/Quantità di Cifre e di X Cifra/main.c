//
//  main.c
//  Quantità di Cifre e di X Cifra
//
//  Created by Simone Cavicchioli on 13/11/15.
//  Copyright © 2015 Simone Cavicchioli. All rights reserved.
//
//  Acquisire una cifra x da tastiera. Successivamente visualizzare la quantità di cifre di 10 interi pseudo casuali compresi tra 1 e 200 e quante volte compare la cifra x all'interno di questi interi. Per svolgere questo compito si definisca ed utilizzi una funzione che dato un intero n ed una cifra x inizializzi gli interi puntatori a variabili intere con la quantià ...


#include <stdio.h>

void cifre(int n, int x, int *tot, int *numx)
{
    *tot = *numx = 0;
    
    do {
        if (n % 10 == x) *numx = *numx + 1;
        n = n / 10;
        *tot = *tot + 1;
        
    } while (n != 0);
}

int main()
{
    int i, x;
    
    printf("--> ");
    scanf("%d", &x);
    
    for (i = 1; i <= 10; i++)
    {
        int tmp, totCifre, numCifre;
        tmp = rand() % 200 + 1;
        
        cifre(tmp, x, &totCifre, &numCifre);
        
        printf("%d: %d %d\n", tmp, totCifre, numCifre);
    }
    return 0;
}